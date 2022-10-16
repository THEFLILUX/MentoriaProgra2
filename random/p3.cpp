#include <iostream>
using namespace std;

void perimetroPoligono (int n , float *l , float *perimetro ){
    float temp = n*(*l);
    *perimetro = temp;
};

void areaPoligono (float perimetro , float &apotema , float *area){
    float temp = (perimetro*apotema)/2;
    *area = temp;
};

int main(){

    int CantidadPol, TamPol, maxPosition=0;
    float lado, apotema, perimetro, area;
    double maxArea=0;
    do{
        cout << "Cantidad de poligonos regulares: ";
        cin >> CantidadPol;
        cout << "Tamanio de Poligono(n): ";
        cin >> TamPol;
    } while(CantidadPol < 1 || TamPol < 1);

    double arr[CantidadPol];

    for (int i = 0; i < CantidadPol; i++) {
        cout << "Poligono " << i+1 << endl;
        cout << "LADO (l): ";
        cin >> lado;
        cout << "APOTEMA (ap): ";
        cin >> apotema;

        perimetroPoligono(TamPol, &lado,&perimetro);
        areaPoligono(perimetro, apotema, &area);
        arr[i] = area;
    }

    cout << "ARREGLO DE AREAS POLIGONO REGULAR DE " << TamPol << " LADOS." << endl;

    for (int i = 0; i < CantidadPol; ++i) {
        double temp = maxArea;
        maxArea = max(maxArea, arr[i]);
        if(temp!= maxArea){
            maxPosition = i;
        }
        cout << "AREA " << i+1 << " = " << arr[i] << endl;
    }

    cout << "El mayor area es " << maxArea << " y esta en la posicion " << maxPosition+1;

    return 0;
}