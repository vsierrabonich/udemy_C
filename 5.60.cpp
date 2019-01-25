//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 5.60. Multiplicar por 2 los números de un array.
//

#include <iostream>
#include <stdlib.h>
#define N 10

using namespace std;

int main(){
    int v[N] = {11,42,34,48,53,6,17,80,92,10};

    cout << "\n--- Array inicial ---\n";
    for(int i = 0; i < N; i++){
        cout << "Possició [" << i << "] --> Valor = " << v[i] << "\n";

    }

    for(int j = 0; j < N; j++){
        v[j] = v[j] * 2;
    }

    cout << "\n--- Array final ---\n";

    for(int k = 0; k < N; k++){
        cout << "Possició [" << k << "] --> Valor = " << v[k] << "\n";

    }

    cout << "\n";

    return 0;
}