//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.14. Promedio de 4 notas
//

#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, nota4, promedio = 0;

    cout << "\nEntra la nota del primer alumno: "; cin >> nota1;
    cout << "Entra la nota del segundo alumno: "; cin >> nota2;
    cout << "Entra la nota del tercer alumno: "; cin >> nota3;
    cout << "Entra la nota del cuarto alumno: "; cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "\nEl promedio de las notas es: " << promedio << "\n\n";

    return 0;
}