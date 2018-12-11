//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 1.7. Pedir datos y mostrarlos
//

#include <iostream>

using namespace std;

int main(){

    int edad;
    float altura;
    char sexo[10];

    cout << "\nEntra la edad: ";
    cin >> edad;
    cout << "Entra la altura: ";
    cin >> altura;
    cout << "Entra el sexo: ";
    cin >> sexo;

    cout << "\nLa edad es: " << edad << "\n";
    cout << "La altura es: " << altura << "\n";
    cout << "El sexo es: " << sexo << "\n\n";

    return 0;
}