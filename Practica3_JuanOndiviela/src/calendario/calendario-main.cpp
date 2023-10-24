/******************************************************************************\
 * Curso de Programación 1. Práctica 3
 * Autores: Juan Ondiviela Pamplona
 * Última revisión: 21 de octubre de 2021
 * Resumen: Programa que escribe en la pantalla el calendario de un determinado
 *          mes de un año, que se solicitan al usuario. El programa se asegura 
 *          de que el mes introducido está comprendido entre 1 y 12 y de que el 
 *          año es igual o posterior a 1900.
 *          Clase de problemas correspondiente al tema 7 (diseño modular y
 *          descendente) y 3ª práctica.
 * Nota: Leer el fichero README.md, que contiene instrucciones para su 
 *       compilación y ejecución.
\******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "fechas.hpp"
using namespace std;

/*
 * Pre:  1 ≤ mes ≤ 12
 * Post: Escribe en la pantalla el nombre (en mayúsculas) del mes
 *       correspondiente al valor del parámetro «mes».
 * Nota: Este código lo podrás comprender adecuadamente cuando hayamos visto
 *       los temas 9 (vectores) y 10 (cadenas de caracteres).
 */


void pedirDatos(unsigned& mes, unsigned&agno){
    cout << "Introduzca el mes [1-12]: ";//Pide un mes al usuario, del 1 al 12(1=Enero,12=Diciembre)
    cin >> mes;//Se introduce el mes
    while(mes < 1 || mes > 12){//Si el mes es menor que 1 o ma
        cout << "El mes debe estar comprendido entre 1 y 12: ";
        cin >> mes;
    }
    cout << "Introduzca un año igual o posterior a 1900: ";
    cin >> agno;
    while(agno < 1900){
        cout << "El año debe ser igual o posterior a 1900: ";
        cin >> agno;
    }
}

void escribirNombreMes(unsigned mes) {
    const string NOMBRES_MES[12] = { "ENERO",
            "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO",
            "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE" };
    cout << setw(23) << NOMBRES_MES[mes - 1];
}

void escribirCabecera(unsigned mes, unsigned agno){
    escribirNombreMes(mes);
    cout << setw(5) << agno << endl;
    cout << setw(4) << "L" << setw(4) << "M" << setw(4) << "X" << setw(4) << "J" << setw(4) << "V" << setw(4) << "S" << setw(4) << "D" << endl;
    cout << "----------------------------" << endl;
}

void escribirCalendario(unsigned& mes, unsigned& agno){
    escribirCabecera(mes, agno);
    unsigned primerDia = diaDeLaSemana(1, mes, agno);
    for(unsigned i = 0; i < primerDia; i++){
        cout << "    ";
    }
    for(unsigned current_dia = 1; current_dia <= diasDelMes(mes, agno); current_dia++){
        cout << setw(4) << current_dia;
        if((primerDia + current_dia) % 7 == 0){
            cout << endl;
        }
    }
}


/*
 * ¡ESCRIBE LA ESPECIFICACIÓN!
 */
int main() {
    unsigned mes, agno;
    pedirDatos(mes, agno);
    escribirCalendario(mes, agno);
    return 0;
}
