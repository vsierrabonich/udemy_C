//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 2.16. Hipotenusa de un triangulo rectángulo
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float cateto1, cateto2, hipotenusa = 0;

    cout << "\nEntra el primer cateto: "; cin >> cateto1;
    cout << "Entra el primer cateto: "; cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout.precision(2);
    cout << "\nLa hipotenusa es: " << hipotenusa << "\n\n";

    return 0;
}