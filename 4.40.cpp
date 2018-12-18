//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.40. Suma dentro de un rango
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int num, resultado = 0;

    do{

        cout << "\nEntra un numero: "; cin >> num;
        if(num > 0 && (num < 20 || num > 30) ) resultado += num;

    }while((num < 20 || num > 30) && (num != 0));

    cout << "\n--- Fin ---\n\nEl resultado de la suma es: "<< resultado << ".\n\n";

    return 0;
}