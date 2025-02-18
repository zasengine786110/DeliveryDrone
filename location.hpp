/**
 * @file location.hpp
 * @brief Defines location class for a robot delivery system.
 * @author Zaheer Sidik
 * @date 2025-02-16
 */
#ifndef __location__
#define __location__
#include <vector>


using namespace std;
class Location{
    int id;
    vector  <pair<int,double>> neighbours;
    public:
    Location(int id, vector <pair<int,double>> neighbours);
     /**
     * @brief Adds a location to the delivery route and specifies the neighbours, note that neighbours are defined as adjacent locations that are reachable from the given location..
     * @param id The id of the location.
     * @param x X co ordinate of the location
     * @param y Y co ordinate of the location
     */
    void addNeighbour(int id, int distance);
    /**
     * @brief prints a list of the neighbour id's and their co-ordinates
     */
    const vector<pair<int, double>>& getNeighbours();
};

#endif