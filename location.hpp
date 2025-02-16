#ifndef __location__
#define __location__
#include <vector>
#include <map>

using namespace std;
class Location{
    int id;
    map <int, vector<int,int>> neighbours;
    public:
    Location(int id, map <int, vector<int,int>> neighbours);
    void addNeighbour(int id, int x, int y);
    void getNeighbours();
};

#endif