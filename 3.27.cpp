//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.27. Edad de ranngo 18-25 años
//

#include <iostream>

using namespace std;

int main(){

    int edad;

    cout << "\nEntra la edad: "; cin >> edad;

    if(edad >= 18 and edad <= 25) cout << "\nTiene entre 18 y 25 años (incluidos)\n\n";
    else cout << "\nNo tiene entre 18 y 25 años (incluidos)\n\n";

    return 0;
}