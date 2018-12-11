//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.23. Determinar si un número es par o impar
//

#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "\nEntra el valor de un número: ";
    cin >> num;

    if(num == 0) cout << "\nEl número es "<< num << ".\n\n";
    else if(num % 2 == 0) cout << "\nEl número "<< num << " es par.\n\n";
    else cout << "\nEl número "<< num << " es impar.\n\n";

    return 0;
}