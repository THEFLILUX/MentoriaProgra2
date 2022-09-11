//
// Created by theflilux on 11/09/22.
//

# include <iostream>
# include <iomanip>
using namespace std;

bool checkSameDigits(int N){

    int digit = N % 10;

    while (N != 0){

        int current_digit = N % 10;

        N = N / 10;

        if (current_digit != digit){
            return false;
        }
    }

    return true;
}


int main(){

    int n;

    do{
        cout << "Numero > 10: ";
        cin >> n;
    } while(n < 11);

    for (int i = 11; i <= n; i++) {
        if(checkSameDigits(i)){
           cout << i << '\n';
        }
    }

    return 0;
}