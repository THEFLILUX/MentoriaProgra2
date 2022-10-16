#include <iostream>
#include <cmath>
#include <random>
using namespace std;

float* func2(float *arr, int aux, int &N){
    float *pArr = new float[N]; int j =0, i;
    for (i = 0; i < N; i++) {
        if(i == aux){
            j++;
            pArr[i] = arr[j];
        } else{
            pArr[i] = arr[j];
        }
        j++;
    }

    return pArr;
}

string* func1(string *arr, int aux, int &N){
    string *pArr = new string[N]; int j =0, i;
    for (i = 0; i < N; i++) {
        if(i == aux){
            j = j + 1;
            pArr[i] = arr[j];
        } else{
            pArr[i] = arr[j];
        }
        j = j + 1;
    }

    return pArr;
}

int main(){

    srand(time(NULL));

    int N=4, time=0;
    float prob, V;

    string *Planets = new string[N]{"Mercurio", "Venus", "Tierra", "Marte"};
    float *Peso = new float[N]{0.5, 8, 10, 1}, *Diametro = new float[N]{0.4, 0.9, 1, 0.5};

    while(N!=1){
        for (int k = 0; k < N-1; k++) {
            for (int j = k+1; j < N; j++) {
                prob = rand() % 31;
                if(prob < 0.5){
                    N = N - 1;
                    cout << "Colisionan " << Planets[k] << " y " << Planets[j] << endl;
                    if(Peso[k] > Peso[j]){
                        Peso[k] = Peso[k] + (Peso[j]/2);
                        Diametro[k] = Diametro[k] * 2;
                        if(N==1){
                            V = (4/3)*M_PI*pow((Diametro[0]/2),3);
                            cout << "Sobrevive " << Planets[k] << ", con masa de " << Peso[k] << " y V de " << V << ", luego de " << time << " años";
                        } else{
                            cout << "Sobrevive " << Planets[k] << ", con masa de " << Peso[k] << endl;
                        }
                        Planets = func1(Planets, j, N);
                        Peso = func2(Peso, j, N);
                        Diametro = func2(Diametro, j, N);
                    } else{
                        Peso[j] = Peso[j] + (Peso[k]/2);
                        Diametro[j] = Diametro[j] * 2;
                        if(N==1){
                            V = (4/3)*M_PI*pow((Diametro[0]/2),3);
                            cout << "Sobrevive " << Planets[j] << ", con masa de " << Peso[j] << " y V de " << V << ", luego de " << time << " años";
                        } else{
                            cout << "Sobrevive " << Planets[j] << ", con masa de " << Peso[j] << endl;
                        }
                        Planets = func1(Planets, k, N);
                        Peso = func2(Peso, k, N);
                        Diametro = func2(Diametro, k, N);
                    }
                }
                time = time + 10;
            }
        }
    }

    delete[] Planets;
    delete[] Peso;
    delete[] Diametro;
    return 0;
}
