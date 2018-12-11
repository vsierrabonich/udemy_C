//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.24. Número positivo o negativo
//

#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "\nEntra el valor de un número: ";
    cin >> num;

    if(num == 0) cout << "\nEl número es "<< num << ".\n\n";
    else if(num > 0) cout << "\nEl número "<< num << " es positivo.\n\n";
    else cout << "\nEl número "<< num << " es negativo.\n\n";

    return 0;
}