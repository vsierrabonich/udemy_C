//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.36. Tabla de multiplicar de un número
//

#include <iostream>

using namespace std;

int main(){

    int num, res = 0, cont = 0;

    cout << "\nEntra un numero: "; cin >> num;
    cout << "\n--- Tabla del " << num << " ---\n\n";

    while(cont <= 10){
        res = num * cont;
        cout << num << " * " << cont << " = " << res << "\n";
        cont += 1;
    }

    cout << "\n\n";

    return 0;
}