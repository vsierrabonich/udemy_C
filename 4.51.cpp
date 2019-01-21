//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.51. Descomponer en factores primos
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num, aleatorio, contador = 0;

    cout << "\nEntra un número: "; cin >> num;
    cout << "\nFactor/s primer/s: \n";

    for(int i = 2; num > 1; i++){
        while(num % i == 0){
            cout << i << " ";
            num /= i;
        }
    }

    cout << "\n\n";
    return 0;
}