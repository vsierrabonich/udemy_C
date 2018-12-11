//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.17. Raiz cuadrada y elevación
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float x, y, resultado = 0;

    cout << "\nEntra el primer número: "; cin >> x;
    cout << "Entra el segundo número: "; cin >> y;

    resultado = (sqrt(x)) / (pow(y, 2) - 1);

    cout.precision(2);
    cout << "\nEl resultado de la función es: " << resultado << "\n\n";

    return 0;
}