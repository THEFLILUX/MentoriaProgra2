//
// Created by theflilux on 02/05/22.
//

#include <iostream>
#include <vector>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void helper(string str,int n,int i){
    //this is base case
    //when pointer 'i' reached the value of n
    //we have to stop at this point
    //because we have to form binary string of size n only
    if(i==n){

        //pushing the binary string formed in vector 'v' to store it
        v.push_back(str);

        //returning back from this point
        //we don't have to go beyond 'n'
        return;
    }

    //making local copy of str
    //size of str at this point is i
    string s1= str;

    //psuhing one '0' at ith index
    //consecutive one's can be present in string
    //there's no issue with it
    //and then making recursive call to fill the remaining string
    s1.push_back('0');
    helper(s1,n,i+1);
    //at this point we have returned back from the solution when
    //'0' is present at ith index
    //there can be another case possible
    //when '1' is present at ith index
    //but for '1' to be present
    //we have to check condition
    //wether string is not containing consecutive '1' or not


    //checking this condition only if
    //we have to fill index greater than zero
    //because there is no index present behind zero
    if(i>0 && str[i-1]=='0'){
        str.push_back('1');
        helper(str,n,i+1);
    }

    //if it is 0th index then we can fill '1' without any restriction
    else if(i==0){
        str.push_back('1');
        helper(str,n,i+1);
    }

    return;
}

vector<string> binaryStrings(int n) {
    string str;


    //making call to heleper function
    //here str passed is empty till now ,
    //we will make binary string of size n and will store it in str
    //0 is passed as pointer
    //when this pointer will reach to n
    //then we will stop and store the binary string formed in vector named 'v'
    helper(str, n, 0);

    return v;

}

int main(){

    vector<string> result = binaryStrings(2);

    for(string i:result){
        cout << i << " ";
    }

    return 0;
}