//
// Created by theflilux on 11/09/22.
//
#include<iostream>
using namespace std;

int main ()
{
    int num;

    do{
        cout << "Numero > 10: ";
        cin >> num;
    } while(num < 11);

    for (int i = 11; i <= num; i++) {
        int reverse = 0, rem, temp;
        temp = i;

        while(temp != 0){
            rem = temp % 10;
            reverse = reverse * 10 + rem;
            temp /= 10;
        }

        if (i == reverse){
            cout << i << '\n';
        }

    }

}