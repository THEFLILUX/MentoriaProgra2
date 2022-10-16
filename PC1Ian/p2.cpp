#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int horas, velocidad, k;
int puntajeCercano = 0, diff=INT_MAX, velocidadCercana, horaCercana,iCercana;
string result[3] = {};

void func(int n, int *arrH, int *arrV, string *arrR){
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < 10; i++) {
            diff = abs(horas + velocidad) - abs(arrH[i] + arrV[i]);
            int temp = puntajeCercano;
            puntajeCercano = min(puntajeCercano, diff);
            if(temp != puntajeCercano){
                horaCercana = arrH[i];
                velocidadCercana = arrV[i];
                iCercana = i;
            }
        }
        result[k] = arrR[iCercana];
        k++;
        arrV[iCercana] = INT_MAX;//2312312832343
        arrH[iCercana] = INT_MAX;
    }
}

int main(){

    int n, vecAlto=0, vecBajo=0;
    int arrH[10]={3,1,8,9,2,2,8,1,7,10};
    int arrV[10]={50,30,99,80,15,42,90,41,95,39};
    string arrR[10]={"Bajo", "Bajo", "Alto", "Alto", "Bajo", "Bajo", "Alto", "Bajo", "Alto", "Bajo"};
    string siniestralidad;
    cout << "Ingresar las horas diarias: ";
    cin >> horas;
    cout << "Ingresar la velocidad promedio: ";
    cin >> velocidad;
    cout << "Ingresar una variable de vecinos cercanos: ";
    cin >> n;

    func(n, arrH, arrV, arrR);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
        if(result[i] == "Bajo"){
            vecBajo++;
        } else{
            vecAlto++;
        }
    }

    cout << "Da como resultado... " << endl;

    if(vecBajo > vecAlto){
        cout << "La siniestralidad es: Bajo";
    } else{
        cout << "La siniestralidad es: Alto";
    }

    return 0;
}