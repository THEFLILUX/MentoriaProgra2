#include <iostream>
using namespace std;

int* getMinMaxRisk(const int* arrH, const int* arrV) {
    int distanceOrigin[10];
    int distance1000[10];
    for (int i = 0; i < 10; i++) {
        distanceOrigin[i] = arrH[i] * arrH[i] + arrV[i] * arrV[i];
        distance1000[i] = (1000 - arrH[i]) * (1000 - arrH[i]) + (1000 - arrV[i]) * (1000 - arrV[i]);
    }
    int minOrigin = 0;
    int min1000 = 0;
    for (int i = 0; i < 10; i++) {
        if (distanceOrigin[i] < distanceOrigin[minOrigin]) {
            minOrigin = i;
        }
        if (distance1000[i] < distance1000[min1000]) {
            min1000 = i;
        }
    }
    return new int[4]{arrH[minOrigin], arrV[minOrigin], arrH[min1000], arrV[min1000]};
}

int main() {
    int arrH[10] = {3, 1, 8, 9, 2, 2, 8, 1, 7, 10};
    int arrV[10] = {50, 30, 99, 80, 15, 42, 90, 41, 95, 39};

    int* minMaxRisk = getMinMaxRisk(arrH, arrV);

    cout << "Cliente con menor riesgo: (" << minMaxRisk[0] << ", " << minMaxRisk[1] << ")" << endl;
    cout << "Cliente con mayor riesgo: (" << minMaxRisk[2] << ", " << minMaxRisk[3] << ")" << endl;

    return 0;
}
