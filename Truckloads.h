// Dai(a1837470), Dil(a1825200), Swapnil(a1848855), Duong(a1876928)
#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H
#include<iostream>
#include<string>

using namespace std;


class Truckloads {
    public:
        Truckloads();
        int numTrucks(int numCrates, int loadSize);
        int numTrucks(int numCrates, int loadSize, int numTrucks);
};

#endif