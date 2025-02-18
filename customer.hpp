#ifndef __customer__
#define __customer__
#include "location.cpp"
#include "location.hpp"
class Customer{
    Location &l;
    int order;
    public:
    Customer(int order, Location &l);
    void setOrder(int order);    
    int getOrder();
    const Location& getLocation()const;
};
#endif