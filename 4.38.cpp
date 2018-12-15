//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.38. Suma de cuadrados
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int cont = 1, resultat = 0;

    while(cont <=10){
        resultat += pow(cont, 2);
        cont += 1;
    }

    cout << "\nEl resultat és: "<< resultat << ".\n\n";

    return 0;
}