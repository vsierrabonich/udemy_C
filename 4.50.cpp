//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 4.50. Número mágico
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int num, aleatorio, contador = 0;

    srand(time(NULL));
    aleatorio = 1 + rand() % (101 - 1);

    cout << "\nEntra un número entre el 1 y el 100: "; cin >> num;

    while(num != aleatorio){
        if (num > aleatorio) {
            cout << "El número " << num << " es más grande que la solución.\nIntroduce otro número: ";
            cin >> num;
        }
        else {
            cout << "El número " << num << " es más pequeño que la solución.\nIntroduce otro número: ";
            cin >> num;
        }
        contador++;
    }

    contador++;
    cout << "\n\nHas encontrado el número!\nIntentos: "<< contador <<".\n\n";

    return 0;
}