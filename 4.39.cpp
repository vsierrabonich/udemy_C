//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.39. Temperaturas en el día
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float temperatura, mayor = 0, menor = 999, sumaTotal = 0, promedio = 0;

    for(int i = 0; i < 24; i += 4){
        cout << "\nEntra la temperatura de la hora "<< i << ": "; cin >> temperatura;
        sumaTotal += temperatura;
        if(temperatura >= mayor) mayor = temperatura;
        if(temperatura <= menor) menor = temperatura;
    }

    promedio = sumaTotal / 6;
    cout << "\nLa temperatura más alta es: "<< mayor << ".";
    cout << "\nLa temperatura más baja es: "<< menor << ".";
    cout << "\nEl promedio de las temperaturas es: "<< promedio << ".\n\n";

    return 0;
}