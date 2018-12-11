//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.25. Comprovar si un carácter es una vocal minúscula o no
//

#include <iostream>

using namespace std;

int main(){

    char car;

    cout << "\nEntra un carácter: ";
    cin >> car;

    if(car == 'a' or car == 'e' or car == 'i' or car == 'o' or car == 'u') cout << "\nEl carácter "<< car << " es vocal minúscula.\n\n";
    else cout << "\nEl carácter "<< car << " no es una vocal minúscula.\n\n";

    return 0;
}