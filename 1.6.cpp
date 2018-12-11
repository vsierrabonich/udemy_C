//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 1.6. Precio de un producto con IVA
//

#include <iostream>

using namespace std;

int main(){

    float precio, iva, precioFinal;

    cout <<"\nEntra el precio sin IVA: ";
    cin >> precio;
    iva = precio * 0.21;
    precioFinal = precio + iva;
    cout <<"El precio final es: "<< precioFinal << "\n\n";

    return 0;
}