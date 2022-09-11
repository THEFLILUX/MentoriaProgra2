//
// Created by theflilux on 30/04/22.
//

#include <iostream>
using namespace std;

void dec(int n){
    //Base case
    if(n==0){
        return;
    }

    //Rec case
    cout << n << " "; //6 5 4 3 2 1
    dec(n-1); 3 --> 2 --> 1
}

void inc(int n){
    // Base case
    if(n==0){
        return;
    }

    //Rec case
    inc(n-1);
    cout << n << " "; // 1 2 3 4 5 6
}

int main(){
    int n;
    cin >> n;
    inc(n);
    cout << endl;
    dec(n);

    return 0;
}