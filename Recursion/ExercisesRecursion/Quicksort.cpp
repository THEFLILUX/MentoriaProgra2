//
// Created by theflilux on 03/05/22.
//

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int pivot = arr[e];
    int i = -1;

    for (int j = s; j < e; j++) {
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[e]);
    return i+1;
}

void quicksort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);
    quicksort(arr, s, p);
    quicksort(arr, p+1, e);
}

int main(){
    vector<int> vec = {10,5,2,0,7,6,4};
    int n = vec.size();
    quicksort(vec, 0, n-1);

    return 0;
}