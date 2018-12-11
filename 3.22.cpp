//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.22. Mayor de 3 números
//

#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3, mayor;

    cout << "\nEntra el valor de tres números: ";
    cin >> num1 >> num2 >> num3;


    if(num1 > num2 and num1 > num3) mayor = num1;
    else if(num2 > num1 and num2 > num3) mayor = num2;
    else if(num3 > num1 and num3 > num2) mayor = num3;

    cout << "\nEl número mayor es: " << mayor << "\n\n";

    return 0;
}