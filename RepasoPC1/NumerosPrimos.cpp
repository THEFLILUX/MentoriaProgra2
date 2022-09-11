//
// Created by theflilux on 11/09/22.
//

#include <iostream>
using namespace std;

bool isPrime(long long int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return false;

    return true;
}

long long int lastPrime(long long int N){
    while(true){
        N = N - 1;
        if(isPrime(N)){
            return N;
        }
    }
}

long long int nextPrime(long long int N)
{
    // Base case
    if (N <= 1)
        return 2;

    long long int prime = N;
    bool found = false;

    while (!found) {
        prime++;

        if (isPrime(prime))
            found = true;
    }

    return prime;
}


void misPrimos(long long int num, long long int *anteriorPrimo, long long int *sigPrimo){
    *sigPrimo = nextPrime(num);
    *anteriorPrimo = lastPrime(num);
}

int main () {
    long long int num = 0;
    long long int anteriorPrimo = 0, sigPrimo = 0;
    do {
        cout << " Numero ␣ [ mayor ␣ a ␣ 10 ␣ ] ␣ : ␣ ";
        cin >> num;
    } while (num <= 10);
    misPrimos(num, &anteriorPrimo, &sigPrimo);
    cout << " El ␣ siguiente ␣ numero ␣ primo ␣ es : ␣ " << sigPrimo << " \n ";
    cout << " El ␣ anterior ␣ numero ␣ primo ␣ es : " << anteriorPrimo << " \n ";
    return 0;
}