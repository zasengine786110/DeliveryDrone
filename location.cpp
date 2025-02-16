#include "location.hpp"
#include <vector>
#include <iostream>
using namespace std;
Location::Location(int id, map <int , vector <int,int>> neighbours) : id(id), neighbours(neighbours){};

void Location::addNeighbour(int id, int x, int y){
    neighbours.insert({id, {x,y}});
}

void Location::getNeighbours(){
    for(const auto &entry : neighbours){
        cout << "Neighbour ID : " << entry.first << "X : " << entry.second[0] << "Y: " << entry.second[1] << endl; 
    }
};