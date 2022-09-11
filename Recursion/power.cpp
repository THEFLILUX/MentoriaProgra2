//
// Created by theflilux on 01/05/22.
//

#include <iostream>
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }
    return a * power(a, n-1);
}

int fastPower(int a, int n){
    if (n==0){
        return 1;
    }

    int subProb = fastPower(a, n/2); //(a^(n/2))
    int subProbSq = subProb*subProb; //(a^(n/2))^2

    //Impar
    if(n&1){
        return a*subProbSq;
    }

    //Par
    return subProbSq;
}

int main(){
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
}