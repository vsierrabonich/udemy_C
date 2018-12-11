//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.18. Ecuaciones de segundo grado
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a, b, c, resultado_pos = 0, resultado_neg = 0;

    cout << "\nEntra el valor de a: "; cin >> a;
    cout << "Entra el valor de b: "; cin >> b;
    cout << "Entra el valor de c: "; cin >> c;

    resultado_pos = (- b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
    resultado_neg = (- b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);

    cout.precision(2);
    cout << "\nEl resultado positivo de la ecuación es: " << resultado_pos;
    cout << "\nEl resultado negativo de la ecuación es: " << resultado_neg << "\n\n";

    return 0;
}