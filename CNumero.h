//
// Created by theflilux on 16/10/22.
//

#ifndef DAVIDORIHUELA_CNUMERO_H
#define DAVIDORIHUELA_CNUMERO_H

#include <iostream>
#include <vector>

using namespace std;

class CNumero{
public:
    int numero;
public:

    explicit CNumero(int numero) : numero(numero) {}

    virtual ~CNumero() = default;

    unsigned long numDeDigitos() const {
        return to_string(this->numero).size();
    }

    int sumaDeDigitos() const{
        int sum;
        for (char i:to_string(this->numero)) {
            sum = sum + (i - '0');
        }

        return sum;
    }


    string numInvertido() const {
        string num = to_string(this->numero);

        int s = 0;
        int e = num.size()-1;

        while(s < e){
            swap(num[s], num[e]);
            s++;
            e--;
        }

        return num;
    }


    vector<int> divisores() const{
        vector<int> result;
        for (int i = 1; i < this->numero; i++)
        {

            if (this->numero%i == 0){
                result.push_back(i);
            }
        }

        return result;
    };
};


#endif //DAVIDORIHUELA_CNUMERO_H
