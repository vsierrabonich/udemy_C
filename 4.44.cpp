//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.44. Factorial de un número
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, resultado = 1;

    cout << "\nEntra la n (número): "; cin >> n;

    for(int i = 1; i <= n; i++){
        resultado = resultado * i;
    }

    cout << "\n--- Fin ---\n\nEl factorial de "<< n <<" es: "<< resultado << ".\n\n";

    return 0;
}