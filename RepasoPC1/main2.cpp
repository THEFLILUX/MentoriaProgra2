#include <iostream>
#include <cmath>
using namespace std;

string* actualizarString(string *pArr, int var, int &n);

double* actualizarDouble(const double *pArr, int var, int &n);

void execution(string *arr1, double *arr2, double *arr3, int & n, double &separation, int &tiempoChoque);

int main(){

    int n=4;
    double *arr3 = new double[n]{0.4, 0.9, 1, 0.5};
    double *arr2 = new double[n]{0.05*10, 0.8*10, 1*10, 0.1*10};
    string *arr1 = new string[n]{"Mercurio", "Venus", "Tierra", "Marte"};

    double separation;
    int tiempoChoque=0;

    execution(arr1, arr2, arr3, n, separation, tiempoChoque);

    return 0;
}

string* actualizarString(string *pArr, int var, int &n){
    string *newArr = new string[n];

    int j =0;
    for (int i = 0; i < n; i++)
    {
        if(i == var)
        {
            j = j + 1;
            newArr[i] = pArr[j];
            j = j + 1;
        }
        else
        {
            newArr[i] = pArr[j];
            j = j + 1;
        }
    }

    return newArr;
}

double* actualizarDouble(const double *pArr, int var, int &n){
    double *newArr = new double[n];

    int j =0;
    for (int i = 0; i < n; i++)
    {
        if(i == var)
        {
            j++;
            newArr[i] = pArr[j];
        }
        else
        {
            newArr[i] = pArr[j];
        }
        j = j + 1;
    }

    return newArr;
}

void execution(string *arr1, double *arr2, double *arr3, int & n, double &separation, int &tiempoChoque){
    srand(time(NULL));

    while(n!=1){
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                separation = rand() % 31;
                tiempoChoque += 10;
                if(separation < 0.5){
                    cout << "Colisionan " << arr1[i] << " y " << arr1[j] << endl;
                    n-=1;
                    if(arr2[i] > arr2[j]){
                        arr2[i] = arr2[i] + (arr2[j]/2);
                        arr3[i] = arr3[i] * 2;
                        if(n==1){
                            cout << "Sobrevive " << arr1[i] << ", con masa de " << arr2[i] << " y V de " << (4/3)*M_PI*pow((arr3[0]/2),3) << ", luego de " << tiempoChoque << " años";
                        } else{
                            cout << "Sobrevive " << arr1[i] << ", con masa de " << arr2[i] << endl;
                        }
                        arr1 = actualizarString(arr1, j, n);
                        arr2 = actualizarDouble(arr2, j, n);
                        arr3 = actualizarDouble(arr3, j, n);
                    } else{
                        arr2[j] = arr2[j] + (arr2[i]/2);
                        arr3[j] = arr3[j] * 2;
                        if(n==1){
                            cout << "Sobrevive " << arr1[j] << ", con masa de " << arr2[j] << " y V de " << (4/3)*M_PI*pow((arr3[0]/2),3) << ", luego de " << tiempoChoque << " años";
                        } else{
                            cout << "Sobrevive " << arr1[j] << ", con masa de " << arr2[j] << endl;
                        }
                        arr1 = actualizarString(arr1, i, n);
                        arr2 = actualizarDouble(arr2, i, n);
                        arr3 = actualizarDouble(arr3, i, n);
                    }
                }
            }
        }
    }
}
