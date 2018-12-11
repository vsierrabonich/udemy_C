//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.13. Intercambio de valores entre 2 variables
//

#include <iostream>

using namespace std;

int main(){

    int num1, num2, aux;

    cout << "\nEntra el primer valor: "; cin >> num1;
    cout << "Entra el segundo valor: "; cin >> num2;

    aux = num1;
    num1 = num2;
    num2 = aux;

    cout << "\nEl nuevo valor del primer número es: " << num1;
    cout << "\nEl nuevo valor del segon número es: " << num2 << "\n\n";

    return 0;
}