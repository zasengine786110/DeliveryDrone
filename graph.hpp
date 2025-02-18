#ifndef __graph__
#define __graph__
#include "location.cpp"
#include "location.hpp"
#include "customer.hpp"
#include "customer.cpp"

using namespace std;
class Graph{
    public:
    vector<Customer> customers;
    Graph() {};
    void addCustomer(Customer &c);
    int NumberofCustomers()const;
    const vector <Customer>& getCustomers()const;
};
#endif