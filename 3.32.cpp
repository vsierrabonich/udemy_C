//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.32. Hacer un menú con 3 opciones
//

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int opc, num, res;

    cout << "\nEntra un número: "; cin >> num;

    cout << "\n\n--- ¿Qué quieres hacer? ---\n\t1.\tVer el cubo del número " << num << ".\n\t2.\tVer si el " << num << " es par o impar.\n\t3.\tSalir.\n";
    cin >> opc;

    switch(opc){
        case 1:
            res = pow(num, 3);
            cout << "\nEl cubo del número " << num << " es " << res << ".\n\n";
            break;
        case 2:
            if(num %2 == 0) cout << "\nEl número " << num << " es par.\n\n";
            else cout << "\nEl número " << num << " es impar.\n\n";
            break;
        case 3:
            cout << "\n\nGracias por usar nuestros servicios.\n\n";
            break;
        default:
            cout << "\n\nERROR! Vuelve a entrar en la aplicación.\n\n";
            break;
    }

    return 0;
}