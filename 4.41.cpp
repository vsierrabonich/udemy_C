//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.41. Calcular x elevado a la y
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int x, y, resultado = 0;

    cout << "\nEntra la x (número): "; cin >> x;
    cout << "\nEntra la y (exponente): "; cin >> y;

    for(int i = 0; i < y; i++){
        if(i == 0) resultado = x;
        else resultado *= x;
    }

    cout << "\n--- Fin ---\n\nEl resultado es: "<< resultado << ".\n\n";

    return 0;
}