//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.15. Porcentaje de notas de un alumno
//

#include <iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, final = 0;

    cout << "\nEntra la nota de prácticas (30%): "; cin >> nota1;
    cout << "Entra la nota de teoría (60%): "; cin >> nota2;
    cout << "Entra la nota de participación (10%): "; cin >> nota3;

    nota1 *= 0.30;
    nota2 *= 0.60;
    nota3 *= 0.10;
    final = nota1 + nota2 + nota3;

    cout << "\nLa nota final del alumno es: " << final << "\n\n";

    return 0;
}