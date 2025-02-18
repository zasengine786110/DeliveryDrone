/**
 * @file drone.hpp
 * @brief Header file for the DeliveryDrone class.
 * 
 * This file contains the definition of the DeliveryDrone class, which is used to manage 
 * the delivery of orders using a drone. It includes methods for delivering orders and 
 * finding the shortest path using Dijkstra's algorithm.
 */

#ifndef __drone__
#define __drone__

#include "customer.hpp"
#include "graph.hpp"
#include "graph.hpp"
#include "graph.cpp"
#include <vector>
using namespace std;

/**
 * @class DeliveryDrone
 * @brief Class representing a delivery drone.
 * 
 * The DeliveryDrone class is responsible for managing the delivery of orders from a store 
 * to customers using a drone. It includes methods for delivering orders and finding the 
 * shortest path using Dijkstra's algorithm.
 */
class DeliveryDrone {
private:
    int capacity; /**< The capacity of the drone. */
    Location& store; /**< Reference to the store location. */
    vector<Customer> orders; /**< Vector of customer orders. */

public:
    /**
     * @brief Constructor for the DeliveryDrone class.
     * 
     * @param capacity The capacity of the drone.
     * @param store Reference to the store location.
     */
    DeliveryDrone(int capacity, Location& store);

    /**
     * @brief Deliver orders using the delivery network.
     * 
     * @param deliveryNetwork Reference to the delivery network graph.
     */
    void deliverOrders(Graph& deliveryNetwork);

    /**
     * @brief Find the shortest path using Dijkstra's algorithm.
     * 
     * @param deliveryNetwork Reference to the delivery network graph.
     * @param start The starting node.
     * @param end The ending node.
     * @return A vector of integers representing the shortest path.
     */
    vector<int> dijkstra(const Graph& deliveryNetwork, int start, int end);
};

#endif