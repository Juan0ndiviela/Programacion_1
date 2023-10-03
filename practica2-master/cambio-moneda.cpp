#include<iostream>
#include<iomanip>
#include<stdio.h>
#include <cmath>
using namespace std;

int main(){
    //Programa que pide al usuario una cantidad en euros
    //y devuelve los euros y los céntimos ingresados, además de su equivalencia en pesetas
    const double pesetas_a_euros = 166.386;
    double euros_cts;
    //Pide al usuario una cifra de dinero en euros
    cout << "Ingresa una cantidad no negativa de dinero en euros: ";
    cin >> euros_cts;
    if(euros_cts > 0){ //Añade un condicional, que dará el resultado deseado si el usuario ingresa una cifra no negativa
        int euros_enteros = euros_cts; //Declara una variable que es la misma que antes pero sin los decimales
        int centimos = (euros_cts - euros_enteros) * 100; //Resta la cantidad real menos la entera para que de un número de dos dígitos
        double pesetas = euros_cts * pesetas_a_euros; //Multiplica la cantidad ingresada por el equivalente en pesetas a 1 euro
        cout << "Son " << euros_enteros << " y " << centimos << " centimos, que equivalen a " << pesetas << " pesetas.";

    }else{
        cout << "La cantidad ingresada no puede ser negativa.";
    }

}