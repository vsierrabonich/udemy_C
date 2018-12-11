//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.21. Determinar el mayor de 2 números
//

#include <iostream>

using namespace std;

int main(){

    int num1, num2, mayor;

    cout << "\nEntra el valor del primer número: "; cin >> num1;
    cout << "Entra el valor del segundo número: "; cin >> num2;

    if(num1 > num2) mayor = num1;
    else mayor = num2;

    cout << "\nEl número mayor es: " << mayor << "\n\n";

    return 0;
}