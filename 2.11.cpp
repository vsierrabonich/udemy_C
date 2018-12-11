//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.11. Expresiones 2
//

#include <iostream>

using namespace std;

int main(){

    float a, b, c, d, e, f, resultado = 0;

    cout << "\nEntra el valor de a: "; cin >> a;
    cout << "Entra el valor de b: "; cin >> b;
    cout << "Entra el valor de c: "; cin >> c;
    cout << "Entra el valor de d: "; cin >> d;
    cout << "Entra el valor de e: "; cin >> e;
    cout << "Entra el valor de f: "; cin >> f;

    resultado = (a + (b / c)) / (d + (e / f));

    cout.precision(2);
    cout << "\nEl resultado es: " << resultado << "\n\n";

    return 0;
}