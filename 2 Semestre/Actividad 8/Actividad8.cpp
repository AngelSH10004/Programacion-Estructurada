/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 14/02/2024
 * Programa: Ejercicio3.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: Arreglos de lista de 10 espacios
 *************************************/

#include <iostream> // Libreria para el manejo del flujo de entrada y salida.
#include <limits>
#include <ctime>
#include "Libreria.cpp"

using namespace std; //  Uso de la libreria STD.

// Declaramos las variables
int num[50] = {0}; // Inicio de generar random
int pos, valor;
int inmenu;
int opcion;
int caso4;
int caso6, caso7;

int main() //  Inicio del programa principal.
{

    do //  Comienzo de un bucle que se repite hasta que se cumpla una condicion
    {
        switch (inmenu) //  Se utiliza para realizar diferentes acciones segun la opcion elegida por el usuario
        {
        case 0: //  Opción para agregar numeros a la lista.

            //  Mostramos los mensajes del menu.
            MenuPrincipal();
            validarOpcionMenu(opcion);
        }

        switch (opcion) //   Condicionales anidados o Case.
        {
        case 1: //  Agregar un numero a la lista.

            GeneracionDeNumeros(num, 50);

            break;

        case 2: //   Muestra los datos de la lista.

            MostrarLista(num, 50);
            ValidacionDeMenu(inmenu);

            break;

        case 3: //    Borra una posicion especificada por el usuario.

            SumaDelArreglo(num, 50);
            ValidacionDeMenu(inmenu);

            break;

        case 4: //  Algoritmos de Ordenamiento.

            MenuCaso4();
            ValidacionDeCaso4(caso4);
            SwitchCaso4(caso4, num, inmenu);

            break;

        case 5: // Borrar Arreglo de la lista
            MostrarNumero(num);

            break;

        case 6:

            BorradoYEdicion(caso6, pos, inmenu, valor, num);
            break;

        case 7:

            BorrarArreglo(inmenu, caso7, num);
        }
    } while (opcion != 8);
}
