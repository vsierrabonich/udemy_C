//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.26. Vocal minúscula o mayúscula
//

#include <iostream>

using namespace std;

int main(){

    char car;

    cout << "\nEntra un carácter: ";
    cin >> car;

    if(car == 'a' or car == 'e' or car == 'i' or car == 'o' or car == 'u') cout << "\nEl carácter "<< car << " es vocal minúscula.\n\n";
    else if(car == 'A' or car == 'E' or car == 'I' or car == 'O' or car == 'U') cout << "\nEl carácter "<< car << " es vocal mayúscula.\n\n";
    else cout << "\nEl carácter "<< car << " no es una vocal.\n\n";

    return 0;
}