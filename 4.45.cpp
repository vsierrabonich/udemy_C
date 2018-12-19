//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.45. Suma de factoriales
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, factorial = 1, resultado = 0;

    cout << "\nEntra la n (número): "; cin >> n;

    for(int i = 1; i <= n; i++){
        factorial *= i;
        resultado += factorial;
    }

    cout << "\n--- Fin ---\n\nEl resultado es: "<< resultado << ".\n\n";

    return 0;
}