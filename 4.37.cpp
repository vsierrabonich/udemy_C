//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.37. Contando número mayores de 0
//

#include <iostream>

using namespace std;

int main(){

    int num, cont = 0;

    do{

        cout << "\nEntra un numero: "; cin >> num;
        if(num > 0) cont++;

    }while(num != 0);

    cout << "\n--- Fin ---\n\nHay "<< cont << " números mayores que 0.\n\n";

    return 0;
}