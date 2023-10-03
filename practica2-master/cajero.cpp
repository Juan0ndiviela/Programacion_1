#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
    unsigned cantidad;
    cout << "Ingrese una cantidad a retirar en euros(positiva y multiplo de 10): ";
    cin >> cantidad;
    if(cantidad % 10 == 0){
        int billetes_50 = cantidad / 50;
        int billetes_20 = (cantidad % 50) / 20;
        int billetes_10 = ((cantidad % 50) % 20) / 10;
        cout << "Billetes" << setw(7) << "Euros" << endl;
        cout << "========" << setw(7) << "=====" << endl;
        cout << setw(5) << billetes_10 << setw(9) << "10" << endl;
        cout << setw(5) << billetes_20 << setw(9) << "20" << endl;
        cout << setw(5) << billetes_50 << setw(9) << "50" << endl;
    }else{
        cout << "Error: La cantidad introducida no es multiplo de 10";
    }
}