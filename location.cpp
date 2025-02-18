#include "location.hpp"
#include <vector>
#include <iostream>
using namespace std;
Location::Location(int id, vector <pair<int,double>> neighbours) : id(id), neighbours(neighbours){};

void Location::addNeighbour(int id, int distance){
    neighbours.push_back({id, distance});
}

const vector <pair<int,double>>& Location::getNeighbours(){
    return neighbours;
}
