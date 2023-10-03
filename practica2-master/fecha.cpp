#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
    //Un programa que pide al usuario una fecha en formato [aaaammdd]
    //y que devuelve la fecha en formato [dd/mm/aaaa]
    //Primero declara las variables sin signo para los dias, meses, años, y la fecha en formato [aaaammdd]
    unsigned dia;
    unsigned mes;
    unsigned year;
    unsigned fecha;
    //Pide al usuario una fecha en el formato solicitado
    cout<<"Introduce una fecha en el formato [aaaammdd]: ";
    cin>>fecha;
    //A partir de la fecha en formato [aaaammdd], saca el año cogiendo el cociente de dividir la fecha entre 10000
    year = fecha/10000;
    //luego el mes, cogiendo el resto de la división anterior, y dividirlo por 100, para coger su cociente
    mes = (fecha % 10000) / 100;
    //y finalmente el dia, cogiendo el resto de la primera división y divirlo por 100, para coger su nuevo resto
    dia = (fecha % 10000) % 100;
    //para cerrar, escribe en pantalla la fecha en formato[dd/mm/aaaa], con los caracteres mínimos en cada variable
    //y añadiendo un '0' en caso de que el hueco del primer caracter de la variable esté vacío
    cout<<"La fecha introducida en formato [dd/mm/aaaa] es: "<<setfill('0')<<setw(2)<<dia<<" / "<<setw(2)<<mes<<" / "<<setw(4)<<year<<endl;

}