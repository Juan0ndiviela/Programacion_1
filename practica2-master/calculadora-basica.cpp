#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
    int num1;
    int num2;
    char operacion;
    cout << "Escribe una operacion entre dos numeros enteros(el primer numero ha de ser no nulo): ";
    cin >> num1 >> operacion >> num2;
    if(num1 == 0){
        cout << "El primer numero no puede ser distinto de 0" << endl;
    }else{
        switch (operacion){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        case '%':
            cout << num1 % num2 << endl;
            break;
        case '^':
            cout << pow(num1,num2) << endl;
            break;
        default:
            cout << "Operacion no comprendida en el rango de la calculadora" << endl;
            break;
        }
    }
}