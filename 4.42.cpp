//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.42. Sumar 1 + 2 + 3... + n
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, y, resultado = 0;

    cout << "\nEntra la n (número): "; cin >> n;

    for(int i = 1; i <= n; i++){
        resultado = resultado + i;
    }

    cout << "\n--- Fin ---\n\nEl resultado es: "<< resultado << ".\n\n";

    return 0;
}