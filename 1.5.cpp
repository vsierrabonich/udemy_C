//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 1.5. Operaciones aritméticas C++
//

#include <iostream>

using namespace std;

int main(){

    int num1, num2, suma = 0, resta = 0, multiplicacion = 0;
    float division = 0;

    cout << "\nEntra el primer número: ";
    cin >> num1;
    cout << "Entra el segundo número: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    cout << "\nLa suma es: " << suma << "\nLa resta es: " << resta << "\nLa multiplicación es: " << multiplicacion << "\nLa división es: " << division << "\n\n";

    return 0;
}