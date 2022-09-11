//
// Created by theflilux on 01/05/22.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void helper(int k, vector<int>& v, int i, vector<int> &aux){
    if(i == v.size()){
        return;
    }

    if(v[i] == k){
        aux.push_back(i);
    }

    helper(k, v, i+1, aux);
}

vector<int> findAllOccurences(int k, vector<int> v){
    vector<int> aux;

    helper(k, v, 0, aux);

    return aux;
}

int main(){
    vector<int> vec = {1,2,5,3,1,2,3,8,6,3,6,7,9};
    int k;
    cin >> k;

    vector<int> result = findAllOccurences(k, vec);

    for(int i:result){
        cout << i << ' ';
    }

    return 0;
}