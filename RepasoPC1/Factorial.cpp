#include<iostream>
using namespace std;

long int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //rec case
    long int ans = n*fact(n-1);
    return ans;
}

int main(){
    int n;
    do{
    cout << "Numero: ";
    cin>>n;
    } while(n<1 || n>20);
    for (int i = 1; i <= n; i++) {
        long int result = fact(i);
        cout<< i << "  " << result <<endl;
    }

}