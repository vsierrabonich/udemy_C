//
// Created by Vicenç Sierra on 08/12/2018.
//
// Udemy - 3.30. Meses del año
//

#include <iostream>

using namespace std;

int main(){

    int mes;

    cout << "\nEntra un mes (númerico): ";
    cin >> mes;

    switch(mes){
        case 1:
            cout << "\nEnero\n\n"; break;
        case 2:
            cout << "\nFebrero\n\n"; break;
        case 3:
            cout << "\nMarzo\n\n"; break;
        case 4:
            cout << "\nAbril\n\n"; break;
        case 5:
            cout << "\nMayo\n\n"; break;
        case 6:
            cout << "\nJunio\n\n"; break;
        case 7:
            cout << "\nJulio\n\n"; break;
        case 8:
            cout << "\nAgosto\n\n"; break;
        case 9:
            cout << "\nSeptiembre\n\n"; break;
        case 10:
            cout << "\nOctubre\n\n"; break;
        case 11:
            cout << "\nNoviembre\n\n"; break;
        case 12:
            cout << "\nDiciembre\n\n"; break;
        default:
            cout << "\nERROR! El mes debe ser un entero del 1 al 12.\n\n"; break;
    }

    return 0;
}