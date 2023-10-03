#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
    int grados;
    double mins;
    double secs;
    cout << "Escriba el valor de un angulo (grados, minutos y segundos): ";
    cin >> grados >> setw(4) >> mins >> setw(3) >> secs;
    double grados_dec = grados + ((mins + (secs / 60.0)) /60.0);
    double rads = grados_dec * M_PI / 180;
    cout << "Valor del angulo en radianes: " << setprecision(4) << rads << " radianes." << endl;
    cout << "sen " << rads << " = " << setprecision(4) << fixed << sin(rads) << endl;
    cout << "cos " << rads << " = " << setprecision(4) << fixed << cos(rads) << endl;
    cout << "tg " << rads << " = " << setprecision(4) << fixed << tan(rads) << endl;
}