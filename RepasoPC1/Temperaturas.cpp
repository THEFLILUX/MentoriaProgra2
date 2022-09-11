//
// Created by theflilux on 11/09/22.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, sum=0, maximun = INT_MIN, count_frio=0, count_temp=0, count_calor=0;
    cout << "Numero de dias: " << '\n';
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Temperatura del dia %d: ", i+1);
        cin >> arr[i];
        sum += arr[i];
        maximun = max(maximun, arr[i]);
        if(arr[i] < 16){
            count_frio++;
        } else if(arr[i] > 15 && arr[i] <= 21){
            count_temp++;
        } else{
            count_calor++;
        }
    }

    cout << "Reporte" << '\n';
    cout << "Temperatura promedio: " << (double) sum/n << '\n';
    cout << "Temperatura maxima: " << maximun << '\n';
    cout << "Dias frios: " << count_frio << '\n';
    cout << "Dias templados: " << count_temp << '\n';
    cout << "Dias calurosos: " << count_calor << '\n';

    return 0;
}