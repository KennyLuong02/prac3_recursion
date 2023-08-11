// Dai(a1837470), Dil(a1825200), Swapnil(a1848855), Duong(a1876928)
#include <string>
#include "EfficientTruckloads.h"

using namespace std;

EfficientTruckLoads::EfficientTruckLoads() {}

int EfficientTruckLoads::numTrucks(int numCrates, int loadSize) {
    if (numCrates < 2 || numCrates > 10000) {
        return 0;
    }

    if (loadSize < 1 || loadSize > (numCrates - 1)) {
        return 0;
    }

    return numTrucks(numCrates, loadSize, 0);
    
}

int EfficientTruckLoads::numTrucks(int numCrates, int loadSize, int numTruck) {
    if (numCrates <= loadSize) return 1;

    if ((numCrates % 2) == 0) {
        numCrates = numCrates * 0.5;
        return numTrucks(numCrates, loadSize, numTruck) + numTrucks(numCrates, loadSize, numTruck);

    } else {
        numCrates = numCrates * 0.5;
        return numTrucks(numCrates + 1, loadSize, numTruck) + numTrucks(numCrates, loadSize, numTruck);
    }
    
}