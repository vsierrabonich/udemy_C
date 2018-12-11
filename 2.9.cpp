//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.9. Expresiones 1
//

#include <iostream>

using namespace std;

int main(){

    float a, b, resultado = 0;

    cout << "\nEntra el valor de a: ";
    cin >> a;
    cout << "Entra el valor de b: ";
    cin >> b;

    resultado = (a / b) + 1;

    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << "\n\n";

    return 0;
}