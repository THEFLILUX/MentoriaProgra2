//
// Created by theflilux on 30/04/22.
//

#include <iostream>
using namespace std;

int lastOccur(int arr[], int n, int key){
    //Base case
    if(n==0){
        return -1;
    }

    //Recursive case
    int subIndex = lastOccur(arr+1, n-1, key);
    if(subIndex == -1){
        if(arr[0]==key){
            return 0;
        } else{
            return -1;
        }
    } else{
        return subIndex+1;
    }
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,4,8,9};

    int n = sizeof (arr)/sizeof (n);

    cout << lastOccur(arr, n, 8);

    return 0;
}