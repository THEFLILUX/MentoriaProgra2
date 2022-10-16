#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arrH[10]={3,1,8,9,2,2,8,1,7,10};
    int arrV[10]={50,30,99,80,15,42,90,41,95,39};
    string arrR[10]={"Bajo", "Bajo", "Alto", "Alto", "Bajo", "Bajo", "Alto", "Bajo", "Alto", "Bajo"};
    int horas, velocidad;
    int puntajeCercano = 0, diff=INT_MAX, velocidadCercana, horaCercana,iCercana;
    string siniestralidad;
    cout << "Ingresar las horas diarias: ";
    cin >> horas;
    cout << "Ingresar la velocidad promedio: ";
    cin >> velocidad;

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

    cout << "La siniestralidad es: " << arrR[iCercana];

    return 0;
}