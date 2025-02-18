/**
 * @file graph.hpp
 * @brief Header file for the Graph class.
 * 
 * This file contains the definition of the Graph class, which manages a collection of Customer objects.
 */

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "location.hpp"
#include "customer.hpp"

using namespace std;

/**
 * @class Graph
 * @brief A class to represent a graph of customers.
 * 
 * The Graph class provides methods to manage and retrieve a collection of Customer objects.
 */
class Graph {
public:
    vector<Customer> customers; /**< A vector to store the customers in the graph. */
    Graph();
    /**
     * @brief Default constructor for the Graph class.
     */
    Graph(vector <Customer> &c);
    /**
     * @brief Adds a customer to the graph.
     * 
     * @param c A reference to the Customer object to be added.
     */
    void addCustomer(Customer &c);

    /**
     * @brief Gets the number of customers in the graph.
     * 
     * @return The number of customers in the graph.
     */
    int NumberofCustomers() const;

    /**
     * @brief Gets the list of customers in the graph.
     * 
     * @return A constant reference to a vector of Customer objects.
     */
    const vector<Customer>& getCustomers() const;

     
};

#endif