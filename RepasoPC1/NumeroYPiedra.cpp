//
// Created by theflilux on 11/09/22.
//

# include <iostream>
using namespace std;

void miscelaneos(unsigned int dia, unsigned int mes, unsigned int *pTuNumero, string *pTuPiedra){
    if(mes == 1 || mes == 2 || mes == 3 || mes == 4){
        if(dia%2 == 0){
            *pTuPiedra = "Esmeralda";
        } else{
            *pTuPiedra = "Zafiro";
        }
    } else if(mes == 5 || mes == 6 || mes == 7 || mes == 8){
        if(dia%2 == 0){
            *pTuPiedra = "Rubi";
        } else{
            *pTuPiedra = "Topacio";
        }
    } else{
        if(dia%2 == 0){
            *pTuPiedra = "Amatista";
        } else{
            *pTuPiedra = "Jade";
        }
    }

    unsigned int temp, sumDigit=0;

    while(dia != 0) {
        temp = dia % 10;
        dia /= 10;
        sumDigit += temp;
    }

    while(mes != 0) {
        temp = mes % 10;
        mes /= 10;
        sumDigit += temp;
    }

    *pTuNumero = sumDigit;

}

int main (){
    unsigned int dia =0 , mes =0 , tuNumero =0;
    string tuPiedra;
    cout << " Dia ␣ : ";
    cin >> dia;
    cout << " Mes ␣ : ␣ ";
    cin >> mes;
    miscelaneos(dia ,mes, &tuNumero, &tuPiedra);
    cout << " Tu ␣ numero ␣ es ␣ ␣ : ␣ " << tuNumero << " \n ";
    cout << " Tu ␣ piedra ␣ preciosa ␣ es ␣ : ␣ " << tuPiedra;
    return 0;
}
