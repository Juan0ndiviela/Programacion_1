/******************************************************************************\
 * Curso de Programación 1. Tema 7 y práctica 3
 * Autores originales: Miguel Ángel Latre y Javier Martínez
 * Modificado por: Juan Ondiviela Pamplona
 * Última revisión: 9 de octubre de 2021
 * Resumen: Módulo principal de un programa interactivo dirigido por menú que
 *          permite al usuario la realización de algunos cálculos con datos de
 *          tipo entero
 * Nota: Leer el fichero README.md, que contiene instrucciones para su 
 *       compilación y ejecución.
\******************************************************************************/

#include <iostream>
#include "calculos.hpp"
using namespace std;

/*
 * Número de operaciones que ofrece actualmente el menú del programa.
 */
const unsigned NUM_OPERACIONES = 9;

/*
 *  Pre:  ---
 *  Post: Presenta en la pantalla el menú de opciones disponibles.
 */
void presentarMenu() {
    cout << endl;
    cout << "MENÚ DE OPERACIONES" << endl;
    cout << "===================" << endl;
    cout << "0 - Finalizar" << endl;
    cout << "1 - Calcular el número de cifras de un número entero" << endl;
    cout << "2 - Sumar las cifras de un número entero" << endl;
    cout << "3 - Extraer una cifra de un número entero" << endl;
    cout << "4 - Calcular la imagen especular de un número entero" << endl;
    cout << "5 - Comprobar si un número entero es primo" << endl;
    cout << "6 - Calcular el factorial de un número entero" << endl;
    cout << "7 - Calcular el máximo común divisor de dos números enteros" << endl;
    cout << "8 - Calcular el mínimo común múltiplo de dos números enteros" << endl;
    cout << "9 - Comprobar si un número entero es capicúa" << endl;
    cout << endl;
}

/*
 *  Pre:  ---
 *  Post: Presenta en la pantalla el menú de opciones disponibles, ha
 *        solicitado al usuario que escriba el código de una de ellas y ha
 *        asignado a «operacion» la nueva respuesta del usuario.
 */
void pedirOrden(unsigned& operacion) {
    presentarMenu();
    cout << "Seleccione una operación [0-" << NUM_OPERACIONES << "]: ";
    cin >> operacion;    
}


/*
 * Pre:  ---
 * Post: Ejecuta la 1ª orden, informando del número de cifras de «numero».
 */
void ejecutarNumCifras(int numero) {
    cout << "El número " << numero << " tiene " << numCifras(numero) << " cifras."
         << endl;
}


/*
 * Pre:  ---
 * Post: Ejecuta la 2ª orden, informando de la suma de las cifras de
 *       «numero».
 */
void ejecutarSumaCifras(int numero) {
    cout << "Las cifras de " << numero << " suman " << sumaCifras(numero) << "."
         << endl;
}


/*
 * Pre:  ---
 * Post: Ejecuta la 3ª orden, informando del valor de la cifra de «numero»
 *       ubicada en la posición especificada por el usuario.
 */
void ejecutarExtraerCifra(int numero) {
    // El usuario debe definir la posición de la cifra de «numero»
    // en la que está interesado.
    cout << "Seleccione la posición de una cifra: ";
    int posicion;
    cin >> posicion;

    if (posicion >= 1) {
        cout << "La cifra situada en la posición " << posicion << " del número " 
             << numero << " es " << cifra(numero, posicion) << "." << endl;
    } else {
        cout << "La posición tiene que ser mayor que 0." << endl;
    }
}


/*
 * Pre:  ---
 * Post: Ejecuta la 4ª orden, informando del valor de la imagen especular de
 * «numero».
 */
void ejecutarImagenEspecular(int numero) {
    cout << "El número imagen especular de " << numero
         << " es el " << imagen(numero) << "." << endl;
}


/*
 * Pre:  ---
 * Post: Ejecuta la 5ª orden, informando sobre si «numero» es un número primo
 *       o no lo es.
 */
void ejecutarEsPrimo(int numero) {
    cout << "El número " << numero;
    if (!esPrimo(numero)) {
        cout << " no";
    }
    cout << " es primo." << endl;
}


/*
 * Pre:  ---
 * Post: Ejecuta la 6ª orden, informando el valor del factorial de «numero».
 */
void ejecutarFactorial(int numero){
    cout << "El factorial de " << numero << " es " << Factorial(numero) << endl;
}


/*
 * Pre: Los dos números no pueden ser 0 simultáneamente
 * Post: Ejecuta la 7ª orden, informando del máximo común divisor de los números «numero1» y «numero2».
 */
void ejecutarMCD(int numero1, int numero2){
    if(numero1 != 0 && numero2 != 0 ){
        cout << "El máximo común divisor de " << numero1 << " y " << numero2 << " es " << mcd(numero1, numero2) << endl;
    }else{
        cout << "Los dos números no pueden ser 0 simultáneamente." << endl;
    }
}


/*
 * Pre: Los dos números no pueden ser 0 simultáneamente
 * Post: Ejecuta la 8ª orden, informando del mínimo común múltiplo de los números «numero1» y «numero2».
 */
void ejecutarMCM(int numero1, int numero2){
    if(numero1 != 0 && numero2 != 0 ){
        cout << "El mínimo común múltiplo de " << numero1 << " y " << numero2 << " es " << mcd(numero1, numero2) << endl;
    }else{
        cout << "Los dos números no pueden ser 0 simultáneamente." << endl;
    }
}

/*
 * Pre:  ---
 * Post: Ejecuta la 9ª orden, informando sobre si «numero1» es capicúa o no.
 */
void ejecutarEsCapicua(int numero){
    cout << "El número " << numero;
    if(!esCapicua){
        cout << " no";
    }
    cout << " es capicúa." << endl; 
}
/*
 *  Pre:  ---
 *  Post: Ejecuta las acciones asociadas a la orden cuyo código es
 *        igual al valor del parámetro «operacion». Si «operacion» no se
 *        corresponde con ninguna de las operaciones, escribe en la pantalla un
 *        mensaje de error.
 */
void ejecutarOrden(unsigned operacion) {
    if (operacion >= 1 && operacion <= NUM_OPERACIONES) {
        // Se va a ejecutar una operación válida.
        // En primer lugar se pide al usuario que defina un número entero.
        cout << "Escriba un número entero: ";
        int numero1;
        int numero2;
        cin >> numero1;

        if (operacion == 1) {
            ejecutarNumCifras(numero1);
        } else if (operacion == 2) {
            ejecutarSumaCifras(numero1);
        } else if (operacion == 3) {
            ejecutarExtraerCifra(numero1);
        } else if (operacion == 4) {
            ejecutarImagenEspecular(numero1);
        } else if (operacion == 5) {
            ejecutarEsPrimo(numero1);
        } else if (operacion == 6) {
            ejecutarFactorial(numero1);
        } else if (operacion == 7) {
            cout << "Escriba otro número entero: ";
            cin >> numero2;
            ejecutarMCD(numero1,numero2);
        } else if (operacion == 8) {
            cout << "Escriba otro número entero: ";
            cin >> numero2;
            ejecutarMCM(numero1,numero2);
        } else if (operacion == 9) {
            ejecutarEsCapicua(numero1);
        }
    } else {
        // El código de operación no es válido
        cout << "Opción desconocida" << endl;
    }
}


/*
 * Programa que plantea al usuario de forma reiterada un menú con varias opciones.
 * En cada iteración, lee la respuesta del usuario y presenta los resultados de
 * ejecutar la opción elegida. Concluye cuando el usuario selecciona la
 * opción «0».
 */
int main() {
    unsigned operacion;
    pedirOrden(operacion);

    // Itera hasta que el valor de «operacion» sea igual a 0.
    while (operacion != 0) {
        ejecutarOrden(operacion);
        pedirOrden(operacion);
    }

    return 0;
}
