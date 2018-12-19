//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.43. Suma de los n número impares
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, resultado = 0;

    cout << "\nEntra la n (número): "; cin >> n;

    for(int i = 1; i <= n*2; i++){
        if(i % 2 != 0) {
            resultado = resultado + i;
        }
    }

    cout << "\n--- Fin ---\n\nEl resultado es: "<< resultado << ".\n\n";

    return 0;
}