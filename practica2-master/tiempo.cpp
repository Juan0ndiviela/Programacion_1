#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
    unsigned tiempo;
    cout << "Introduce una duracion de tiempo en segundos: ";
    cin >> tiempo;
    unsigned dias = tiempo / 86400;
    unsigned horas = (tiempo % 86400) / 3600;
    unsigned minutos = ((tiempo % 86400) % 3600) / 60;
    unsigned segundos = ((tiempo % 86400) % 3600) % 60;
    cout << "Esta cantidad de tiempo equivale a " << dias <<" dias, " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos.";
}