//
// Created by theflilux on 03/05/22.
//

#include <bits/stdc++.h>
using namespace std;

int helper(vector<int>& v, int x, int s, int e){

    //Base case
    int mid = (s+e)/2;

    if(v[mid] == x){
        return mid;
    } else if(v[mid] != x && s==e){
        return -1;
    }


    //Rec case
    if(x < v[mid]){
        helper(v, x, s, mid-1);
    } else{
        helper(v, x, mid+1, e);
    }

}

int binarySearch(vector<int>& v, int x)
{
    int result = helper(v, x, 0, v.size()-1);
    return result;
}

int main(){

    vector<int> vec = {1,3,5,7,9};
    cout << binarySearch(vec, 2);

    return 0;
}