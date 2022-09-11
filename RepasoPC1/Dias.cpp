//
// Created by theflilux on 11/09/22.
//

#include <iostream>
using namespace std;

void contarDias(unsigned int dia, unsigned int mes, unsigned int anio, unsigned int *pDiasTranscurridos, unsigned int *pDiasParaAnioNuevo){
    mes = mes - 1;
    while(mes != 0){
        switch (mes) {
            case 2:
                if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0){
                    *pDiasTranscurridos += 29;
                } else{
                    *pDiasTranscurridos += 28;
                }
                break;
            case 4:
                *pDiasTranscurridos += 30;
                break;
            case 6:
                *pDiasTranscurridos += 30;
                break;
            case 9:
                *pDiasTranscurridos += 30;
                break;
            case 11:
                *pDiasTranscurridos += 30;
                break;
            default:
                *pDiasTranscurridos += 31;
                break;
        }
        mes--;
    }
    *pDiasTranscurridos += dia;
    if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0){
        *pDiasParaAnioNuevo = 366 - *pDiasTranscurridos;
    } else{
        *pDiasParaAnioNuevo = 365 - *pDiasTranscurridos;
    }
    *pDiasTranscurridos = *pDiasTranscurridos - 1;
}

int main (){
    unsigned int dia =0 , mes =0 , anio =0;
    unsigned int diasTranscurridos =0 , diasParaAnioNuevo =0;
    cout << " Dia: " ; cin >> dia ;
    cout << " Mes: " ; cin >> mes ;
    cout << " Annio: " ; cin >> anio ;
    contarDias(dia, mes, anio, &diasTranscurridos, &diasParaAnioNuevo);
    cout << " Han ␣ transcurrido: " << diasTranscurridos << " \n " ;
    cout << " Faltan ␣ para ␣ anio ␣ Nuevo: " << diasParaAnioNuevo ;
    return 0;
}
