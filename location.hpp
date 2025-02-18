/**
 * @file location.hpp
 * @brief Defines location class for a robot delivery system.
 * @author Zaheer Sidik
 * @date 2025-02-16
 */
#ifndef LOCATION_HPP
#define LOCATION_HPP
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
     * @param distance The distance to the neighbouring location from the current location
     */
    void addNeighbour(int id, int distance);
    /**
     * @brief prints a list of the neighbour id's and their co-ordinates
     */
    const vector<pair<int, double>>& getNeighbours()const;
    int getId()const;
};

#endif