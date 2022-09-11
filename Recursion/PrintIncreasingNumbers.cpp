//
// Created by theflilux on 01/05/22.
//

#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int>& vec, int i, int N){
    if(i==N+1){
        return;
    }

    vec.push_back(i);

    helper(vec, i+1, N);
}

vector<int> increasingNumbers(int N){
    int i=1;
    vector<int> vec;

    helper(vec, i, N);

    return vec;
}

int main(){
    int N;
    cin >> N;

    vector<int> v = increasingNumbers(N);

    for(int i:v){
        cout << i;
    }

    return 0;
}