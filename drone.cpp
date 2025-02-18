#include "drone.hpp"
#include "graph.hpp"
#include "graph.cpp"

#include <iostream>
#include <queue>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

DeliveryDrone::DeliveryDrone(int capacity, Location& store) : capacity(capacity), store(store) {}

vector<int> DeliveryDrone::dijkstra(const Graph& deliveryNetwork, int start, int end) {
    vector<double> dist(deliveryNetwork.NumberofCustomers(), numeric_limits<double>::max());
    vector<int> prev(deliveryNetwork.NumberofCustomers(), -1);
    dist[start] = 0;

    using pii = pair<double, int>;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (u == end) break;

        for (const auto& neighbour : deliveryNetwork.getCustomers()[u].getLocation().getNeighbours()) {
            int v = neighbour.first;
            double weight = neighbour.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    vector<int> path;
    for (int at = end; at != -1; at = prev[at]) {
        path.push_back(at);
    }
    reverse(path.begin(), path.end());
    return path;
}

void DeliveryDrone::deliverOrders(Graph& deliveryNetwork) {
    int storeId = store.getId();
    const vector<Customer>& customers = deliveryNetwork.getCustomers();

    for (int i = 0; i < customers.size(); i += capacity) {
        vector<int> deliveryPath = {storeId};

        for (int j = i; j < i + capacity && j < customers.size(); ++j) {
            int customerId = customers[j].getLocation().getId();
            vector<int> path = dijkstra(deliveryNetwork, deliveryPath.back(), customerId);
            deliveryPath.insert(deliveryPath.end(), path.begin() + 1, path.end());
        }

        vector<int> returnPath = dijkstra(deliveryNetwork, deliveryPath.back(), storeId);
        deliveryPath.insert(deliveryPath.end(), returnPath.begin() + 1, returnPath.end());

        cout << "Delivery path: ";
        for (int loc : deliveryPath) {
            cout << loc << " ";
        }
        cout << endl;
    }
}