//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 5.57. Mayor elemento de un array
//

#include <iostream>
#include <stdlib.h>
#define N 10

using namespace std;

int main(){

    int v[N];
    int major = 0;

    for(int cont = 0; cont < 10; cont++){
        cin >> v[cont];
    }

    cout << "\n";

    for(int cont = 0; cont < 10; cont++){
        if(v[cont] >= major) major = v[cont];
    }

    cout << "El número més gran del vector és: " << major << "\n";
    return 0;
}