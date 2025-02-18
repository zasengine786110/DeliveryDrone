#ifndef __drone__
#define __drone__

#include "customer.hpp"
#include "graph.hpp"
#include "graph.hpp"
#include "graph.cpp"
#include <vector>
using namespace std;

class DeliveryDrone {
    private:
    int capacity;
    Location& store;
    vector<Customer> orders;
public:
    DeliveryDrone(int capacity, Location& store);
    void deliverOrders(Graph& deliveryNetwork);
    vector<int> dijkstra(const Graph& deliveryNetwork, int start, int end);

};

#endif