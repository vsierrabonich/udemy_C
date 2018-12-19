//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.46. Sumar 2^1 + 2^2 + ... + 2^n
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, resultado = 0;

    cout << "\nEntra la n (número): "; cin >> n;

    for(int i = 1; i <= n; i++){
        resultado += pow(2, i);
    }

    cout << "\n--- Fin ---\n\nEl resultado es: "<< resultado << ".\n\n";

    return 0;
}