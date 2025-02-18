#include "graph.hpp"
#include <vector>
#include <iostream>
using namespace std;

Graph::Graph(){};

void Graph::addCustomer(Customer &c){
        customers.push_back(c);
    }
int Graph::NumberofCustomers()const{
    return customers.size();
}

const vector<Customer>& Graph::getCustomers()const{
    return customers;
}
