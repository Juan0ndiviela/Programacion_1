#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
    //Un programa que pida al usuario un número comprendido entre el 1 y el 10, y devuelva el número escrito en número romano
    int numero;
    cout << "Ingresa un numero del 1 al 10(ambos incluidos): ";
    cin >> numero;
    cout << "El numero " <<numero <<" en romano es: ";
    switch (numero){
        case 1:
            cout << "I.";
            break;
        case 2:
            cout << "II.";
            break;
        case 3:
            cout << "III.";
            break;
        case 4:
            cout << "IV.";
            break;
        case 5:
            cout << "V.";
            break;
        case 6:
            cout << "VI.";
            break;
        case 7:
            cout << "VII.";
            break;
        case 8:
            cout << "VIII.";
            break;
        case 9:
            cout << "IX.";
            break;
        case 10:
            cout << "X.";
            break;
    default:
    cout <<"ERROR! El numero introducido no se encuentra en el intervalo comprendido entre 1 y 10.";
        break;
    }
}