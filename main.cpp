#include <iostream>
#include <vector>
#include "CNumero.h"
using namespace std;

int main(){

    int numero;
    do{cout << "Numero de al menos 3 digitos: "; cin >> numero ;
    }while(numero < 100);
    CNumero obj(numero) ;
    cout << "\nAnalizando el numero\n";
    cout << "Numero de digitos: " << obj.numDeDigitos() << endl;
    cout << "La suma de sus digitos es: " << obj.sumaDeDigitos() << endl;
    cout << "El numero invertido es: " << obj.numInvertido() << endl;
    cout << "Los divisores menores al numero son:\n" ;
    vector<int> vecDiv = obj.divisores();
    for(const auto & item : vecDiv)
        cout << item << " ";
    return 0;
}