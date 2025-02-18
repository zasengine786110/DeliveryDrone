#include "location.hpp"
#include "customer.hpp"
#include "graph.hpp"
#include "drone.hpp"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Create locations
    Location loc0(0, {});
    Location loc1(1, {});
    Location loc2(2, {});
    Location loc3(3, {});

    // Add neighbours
    loc1.addNeighbour(2, 10);
    loc1.addNeighbour(0, 20);
    loc2.addNeighbour(1, 10);
    loc3.addNeighbour(0, 10);
    cout << "Added neighbours" << endl;

    // Create customers
    Customer cust1(1, loc1);
    Customer cust2(2, loc2);
    Customer cust3(3, loc3);
    cout << "Created customers"<< endl;

    // Create graph and add customers
    Graph deliveryNetwork;
    deliveryNetwork.addCustomer(cust1);
    deliveryNetwork.addCustomer(cust2);
    deliveryNetwork.addCustomer(cust3);
    cout << "Created network and added customers" << endl;
    

    // Set the customer orders for that day
    srand(time(0));
    for(int i = 0; i < deliveryNetwork.NumberofCustomers(); i++){
        deliveryNetwork.customers[i].setOrder(rand() % 3); // sets a random order number for each customer
    }
    cout << "Set orders for each customer" << endl;

    // Create delivery drone
    DeliveryDrone drone(3, loc0);

    cout << "Created the drone" << endl;

    // Deliver orders
    drone.deliverOrders(deliveryNetwork);
    cout << "Organised delivery order" << endl;

    return 0;

}