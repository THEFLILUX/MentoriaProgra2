//
// Created by theflilux on 30/04/22.
//

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    //Base case
    if (n==0){
        return -1;
    }

    //Recursive case
    if(arr[0] == key){
        return 0;
    }

    int subIndex = firstOcc(arr+1, n-1, key);
    if(subIndex != -1){
        return subIndex + 1;
    }

    return -1;
}

int main(){
    int arr[] = {0,1,2,3,4,5};

    int n = sizeof (arr)/sizeof (n);

    cout << firstOcc(arr, n, 3);

    return 0;
}