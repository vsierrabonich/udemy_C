//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 5.59. Almacenar el contenido de 2 arrays en uno solo
//

#include <iostream>
#include <stdlib.h>
#define N 10

using namespace std;

int main(){
    int v1[N] = {1,2,3,4,5,6,7,8,9,10};
    int v2[N] = {1,2,3,4,5,6,7,8,9,10};
    int v_res[N * 2];
    int cont = 0;

    for(int i = 0; i < N; i++){
        v_res[i] = v1[i];
    }

    for(int j = N; j < N * 2; j++){
        v_res[j] = v2[cont];
        cont++;
    }

    cout << "\n";

    for(int k = 0; k < N * 2; k++){
        cout << "Possició [" << k << "] --> Valor = " << v_res[k] << "\n";

    }

    cout << "\n";

    return 0;
}