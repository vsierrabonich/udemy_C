//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.49. Comprobar exámenes
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float al1_nota1, al1_nota2, al1_nota3;
    float al2_nota1, al2_nota2, al2_nota3;
    float al3_nota1, al3_nota2, al3_nota3;
    float al4_nota1, al4_nota2, al4_nota3;
    float al5_nota1, al5_nota2, al5_nota3;

    int todos = 0, uno = 0, ultimo = 0;

    cout << "\nEntra las notas del primer alumno: "; cin >> al1_nota1 >> al1_nota2 >> al1_nota3;
    cout << "\nEntra las notas del segundo alumno: "; cin >> al2_nota1 >> al2_nota2 >> al2_nota3;
    cout << "\nEntra las notas del tercer alumno: "; cin >> al3_nota1 >> al3_nota2 >> al3_nota3;
    cout << "\nEntra las notas del cuarto alumno: "; cin >> al4_nota1 >> al4_nota2 >> al4_nota3;
    cout << "\nEntra las notas del quinto alumno: "; cin >> al5_nota1 >> al5_nota2 >> al5_nota3;

    if(al1_nota1 >= 5 and al1_nota2 >= 5 and al1_nota3 >= 5) todos++;
    if(al2_nota1 >= 5 and al2_nota2 >= 5 and al2_nota3 >= 5) todos++;
    if(al3_nota1 >= 5 and al3_nota2 >= 5 and al3_nota3 >= 5) todos++;
    if(al4_nota1 >= 5 and al4_nota2 >= 5 and al4_nota3 >= 5) todos++;
    if(al5_nota1 >= 5 and al5_nota2 >= 5 and al5_nota3 >= 5) todos++;

    if(al1_nota1 >= 5 or al1_nota2 >= 5 or al1_nota3 >= 5) uno++;
    if(al2_nota1 >= 5 or al2_nota2 >= 5 or al2_nota3 >= 5) uno++;
    if(al3_nota1 >= 5 or al3_nota2 >= 5 or al3_nota3 >= 5) uno++;
    if(al4_nota1 >= 5 or al4_nota2 >= 5 or al4_nota3 >= 5) uno++;
    if(al5_nota1 >= 5 or al5_nota2 >= 5 or al5_nota3 >= 5) uno++;

    if(al1_nota1 < 5 and al1_nota2 < 5 and al1_nota3 >= 5) ultimo++;
    if(al2_nota1 < 5 and al2_nota2 < 5 and al2_nota3 >= 5) ultimo++;
    if(al3_nota1 < 5 and al3_nota2 < 5 and al3_nota3 >= 5) ultimo++;
    if(al4_nota1 < 5 and al4_nota2 < 5 and al4_nota3 >= 5) ultimo++;
    if(al5_nota1 < 5 and al5_nota2 < 5 and al5_nota3 >= 5) ultimo++;

    cout << "\nHa/n aprovat tots els exámens " << todos << " alumne/s.";
    cout << "\nHa/n aprovat com a mínim un examen " << uno << " alumne/s.";
    cout << "\nHa/n aprovat només l'últim examen " << ultimo << " alumne/s.";

    cout << "\n\n";

    return 0;
}