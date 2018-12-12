//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.28. Coincidencia de números
//

#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3, num4;

    cout << "\nEntra tres números: ";
    cin >> num1 >> num2 >> num3;

    cout << "\nEntra el número a buscar: ";
    cin >> num4;

    if(num4 == num1) cout << "\nEl número " << num4 << " se encuentra entre los tres números entrados (" << num1 << ", " << num2 << ", " << num3 << ").\n\n";
    else if(num4 == num2) cout << "\nEl número " << num4 << " se encuentra entre los tres números entrados (" << num1 << ", " << num2 << ", " << num3 << ").\n\n";
    else if(num4 == num3) cout << "\nEl número " << num4 << " se encuentra entre los tres números entrados (" << num1 << ", " << num2 << ", " << num3 << ").\n\n";
    else cout << "\nEl número " << num4 << " no se encuentra entre los tres números entrados (" << num1 << ", " << num2 << ", " << num3 << ").\n\n";

    return 0;
}