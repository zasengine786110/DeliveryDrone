/**
 * @file customer.hpp
 * @brief Header file for the Customer class.
 */

#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include "location.hpp"

/**
 * @class Customer
 * @brief Represents a customer with an order and a location.
 */
class Customer {
    Location &l; ///< Reference to the customer's location.
    int order; ///< The customer's order number.

public:
    /**
     * @brief Constructs a Customer object.
     * @param order The order number.
     * @param l Reference to the customer's location.
     */
    Customer(int order, Location &l);

    /**
     * @brief Sets the customer's order number.
     * @param order The new order number.
     */
    void setOrder(int order);

    /**
     * @brief Gets the customer's order number.
     * @return The order number.
     */
    int getOrder();

    /**
     * @brief Gets the customer's location.
     * @return A constant reference to the customer's location.
     */
    const Location& getLocation() const;
};

#endif