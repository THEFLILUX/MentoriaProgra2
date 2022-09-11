//
// Created by theflilux on 01/05/22.
//

#include <iostream>
using namespace std;

int tilingProblem(int n, int m){
    if(n < m){
        return 1;
    }

    if(n==m){
        return 2;
    }

    return tilingProblem(n-1, m)+tilingProblem(n-m, m);
}

int main(){
    int n=4,m=3;
    cout << tilingProblem(n,m);

    return 0;
}