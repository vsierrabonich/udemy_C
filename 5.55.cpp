//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 5.55. Mostrar elementos del array y el valor asociado
//

#include <iostream>
#include <stdlib.h>
#define N 10

using namespace std;

int main(){

    int v[N];

    for(int cont = 0; cont < 10; cont++){
        cin >> v[cont];
    }

    cout << "\n";

    for(int cont = 0; cont < 10; cont++){
        cout << "Posició [" << cont << "] --> " << v[cont] << "\n";
    }

    cout << "\n";
    return 0;
}