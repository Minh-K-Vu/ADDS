#include "Truckloads.h"
int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates < loadSize || numCrates == loadSize) {
        return 1;
    } else {
        int firstNumCrates = numCrates / 2;
        int remainingNumCrates = numCrates - firstNumCrates;
        return (numTrucks(firstNumCrates, loadSize)) +
               (numTrucks(remainingNumCrates, loadSize));
    }
}
