//
// Created by theflilux on 03/05/22.
//

#include <iostream>
using namespace std;

int friendsPairing(int n){
    if(n == 1 || n == 0){
        return 1;
    }

    int result = friendsPairing(n-1) + (n-1)* friendsPairing(n-2);
    return result;
}

int main(){
    cout << friendsPairing(2);

    return 0;
}