//
// Created by theflilux on 02/05/22.
//

#include <iostream>
using namespace std;


string binaryString(int n){

    string ans = binaryString(n-1);

    return ans;
}

int main(){

    binaryString(3);

    return 0;
}