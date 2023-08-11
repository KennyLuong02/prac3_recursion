// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include<iostream>
#include<string>

using namespace std;


class EfficientTruckLoads {
public:
    EfficientTruckLoads();
    int numTrucks(int numCrates, int loadSize);
    int numTrucks(int numCrates, int loadSize, int numTrucks);
};

#endif