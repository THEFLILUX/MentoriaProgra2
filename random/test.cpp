#include <iostream>
#include <vector>
using namespace std;

//Templates
template<typename T>
T suma(T var1, T var2){
    return var1 + var2;
}

//Vectores
int main(){

    vector<float> vec;

    vec.push_back(2); // Agrega un elemento al final del vector
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(6);
    vec.pop_back(); // Eliminar el ultimo elemento del vector
    vec.pop_back();

    for (auto i:vec) { //for i in list:
        cout << i << " ";
    }

    return 0;
}