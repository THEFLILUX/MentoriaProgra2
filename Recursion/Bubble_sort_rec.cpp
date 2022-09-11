//
// Created by theflilux on 01/05/22.
//

#include <iostream>
using namespace std;

void bubble_sort_rec(int a[], int n){
    if(n==1){
        return;
    }

    for (int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    bubble_sort_rec(a,n-1);
}

void bubble_sort_rec_2(int a[], int n, int j){

    //base case
    if(n==1){
        return;
    }

    if(j==n-1){
        bubble_sort_rec_2(a,n-1,0);
        return;
    }

    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_rec_2(a,n,j+1);
}

int main(){

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};

    int n=sizeof(arr)/sizeof (int);

    bubble_sort_rec_2(arr, n,0);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}