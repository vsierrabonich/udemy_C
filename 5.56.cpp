//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 5.56. Imprimir array en orden inverso
//

#include <iostream>
#include <stdlib.h>
#define N 10

using namespace std;

int main(){

    int v[N]={1,2,3,4,5,6,7,8,9,10};

    cout << "\n";
    for(int cont = 9; cont >=0 ; cont--) {
        cout << "Valor: " << v[cont] << "\n";
    }

    cout << "\n";
    return 0;
}