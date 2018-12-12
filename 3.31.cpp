//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.31. Cajero automático con menú
//

#include <iostream>

using namespace std;

int main(){

    int opc;
    float saldo = 2500, ret, ing;

    cout << "\n--- Bienvenido a tu cuenta bancaria ---\n\nTu saldo actual es de: " << saldo << " €.\n";
    cout << "\n--- ¿Qué quieres hacer? ---\n\t1.\tSacar dinero.\n\t2.\tIngresar dinero.\n\t3.\tSalir.\n";
    cin >> opc;

    switch(opc){
        case 1:
            cout << "\nCantidad a retirar: "; cin >> ret;
            if(ret > saldo) cout << "\nNo tiene tanto saldo disponible.";
            else {
                saldo -= ret;
                cout << "\nHa retirado " << ret << "€.\nTu saldo actual es de: " << saldo << "€.";
            }
            cout << "\n\nGracias por usar nuestros servicios.\n\n";
            break;
        case 2:
            cout << "\nCantidad a ingresar: "; cin >> ing;
            saldo += ing;
            cout << "\nHa ingresado " << ing << "€.\nTu saldo actual es de: " << saldo << "€.";
            cout << "\n\nGracias por usar nuestros servicios.\n\n";
            break;
        case 3:
            cout << "\n\nGracias por usar nuestros servicios.\n\n"; break;
        default:
            cout << "\n\nERROR! Vuelve a entrar en la aplicación.\n\n"; break;
    }

    return 0;
}