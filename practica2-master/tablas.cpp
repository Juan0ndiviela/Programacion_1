/*******************************************************************************
 * Curso de Programación 1. Práctica 2
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 22 de septiembre de 2022
 * Resumen: Programa interactivo que presenta por pantalla las tablas de 
 *          multiplicar seleccionadas por el usuario.   
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

const unsigned FIN = 0;

/*
 *  Escribe en la pantalla la tabla de multiplicar del «n»:
 *
 *        LA TABLA DEL «n»
 *        «n» x  0 =  0
 *        «n» x  1 = «n»
 *        «n» x  2 = ...
 *             ...
 *        «n» x  9 = ...
 *        «n» x 10 = ...
 */
void presentarTabla(unsigned n) {
    // Escribe la cabecera de la tabla de multiplicar del «n»
    cout << endl;
    cout << "LA TABLA DEL " << n << endl;

    // Escribe las 11 líneas de la tabla de multiplicar del «n»
    unsigned int i = 0;
    while (i <= 10) {
        cout << setw(3) << n << " x " << setw(2) << i << " = " << setw(3) << n * i << endl;
        i++;
    }
}

/*
 * Programa que pregunta reiteradamente al usuario qué tabla de multiplicar 
 * desea escribir y la escribe a continuación, salvo cuando el usuario responde 
 * con un 0, en cuyo caso el programa termina.
 */
int main() {
    // Plantea la primera pregunta al usuario
    cout << "Tabla que desea escribir (" << FIN << " para acabar): ";

    // Asigna a «multiplicando» el primer valor entero escrito por el usuario
    unsigned multiplicando;
    cin  >>  multiplicando;

    // Itera hasta que el usuario responda con un valor nulo
    while (multiplicando != FIN) {
        // Presenta la tabla de multiplicar del último dato escrito por el usuario.
        presentarTabla(multiplicando);

        // Plantea una nueva pregunta al usuario
        cout << endl;
        cout << "Tabla que desea escribir (" << FIN << " para acabar): ";

        // Asigna a «multiplicando» el nuevo valor entero escrito por el usuario
        cin >> multiplicando;
    }
}
