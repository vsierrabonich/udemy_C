//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 5.54. Multiplicación de elementos de un array
//

#include <iostream>
#include <stdlib.h>
#define N 10

using namespace std;

int main(){

    int v[N]={1,2,3,4,5,6,7,8,9,10};
    int res = 1;

    for(int cont = 0; cont < 10; cont++){
        res *= v[cont];
    }

    cout << "\n\nLa suma dels elements de l'array és de : " << res << "\n\n";

    return 0;
}