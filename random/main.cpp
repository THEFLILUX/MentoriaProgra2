#include <iostream>
#include <cmath>
using namespace std;

int modulo(int *pArr, int n) {
    int aux = 0;
    for (int i = 0; i < n; i++) {
        aux += pow(pArr[i],2);
    }

    return sqrt(aux);
}

int productoEscalar(const int v1[], const int v2[], int n){
    int result = 0;
    for (int j = 0; j < n; j++) {
        result += v1[j] * v2[j];
    }
    return result;
}

int angulo(int m1, int m2, int pE){
    return acos((pE)/(m1*m2));
}

int main(){

    int n, value, m1, m2, pE, angle;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> value;
        arr1[i] = value;
    }

    for (int i = 0; i < n; ++i) {
        cin >> value;
        arr2[i] = value;
    }

    m1 = modulo(arr1, n);
    cout << m1 << endl;
    m2 = modulo(arr2, n);
    cout << m2 << endl;
    pE = productoEscalar(arr1, arr2, n);
    cout << pE << endl;
    angle = angulo(m1, m2, pE);
    cout << angle;

    delete []arr1;
    delete []arr2;
    return 0;
}
