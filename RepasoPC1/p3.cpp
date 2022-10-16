#include <iostream>
using namespace std;

// Puntos extra - Hallar los puntos mas cercanos

int* getClosestPoints(const int* hours, const int* velocity) {
    int distances[10][10];
    int closestPoints[10][2];
    int minDistance = 100000;
    int minDistanceIndex = 0;
    int closestPointIndex = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            distances[i][j] = abs(hours[i] - hours[j]) + abs(velocity[i] - velocity[j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (distances[i][j] < minDistance) {
                minDistance = distances[i][j];
                minDistanceIndex = j;
            }
        }
        closestPoints[closestPointIndex][0] = i;
        closestPoints[closestPointIndex][1] = minDistanceIndex;
        closestPointIndex++;
        minDistance = 100000;
    }

    return new int[4]{hours[closestPoints[0][0]], velocity[closestPoints[0][1]], hours[closestPoints[1][0]], velocity[closestPoints[1][1]]};
}

int main() {
    int hours[10] = {3, 1, 8, 9, 2, 2, 8, 1, 7, 10};
    int velocity[10] = {50, 30, 99, 80, 15, 42, 90, 41, 95, 39};

    int* closestPoints = getClosestPoints(hours, velocity);

    cout << "Los puntos mas cercanos son: " << endl;
    cout << "Punto 1: (" << closestPoints[0] << ", " << closestPoints[1] << ")" << endl;
    cout << "Punto 2: (" << closestPoints[2] << ", " << closestPoints[3] << ")" << endl;

    return 0;
}
