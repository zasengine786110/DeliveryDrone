#include "customer.hpp"

Customer::Customer(int order, Location &l) : order(order), l(l){};
void Customer::setOrder(int order){
    this->order = order;
}
int Customer::getOrder(){
    return order;
}
const Location& Customer::getLocation() const {
    return l;
}