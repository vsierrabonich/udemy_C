//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.48. Serie fibonacci
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, x = 0, y = 1, z = 1;

    cout << "\nEntra la n (número): "; cin >> n;

    cout << "\n--- Fin ---\n\nEl resultado es: 1 ";

    for(int i = 1; i < n; i++){
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }

    cout << "\n\n";

    return 0;
}