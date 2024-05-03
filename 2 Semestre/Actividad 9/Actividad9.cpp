/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 24/04/2024
 * Programa: Ejercicio9.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: Arreglo con Funciones recursivas.
 *************************************/

#include <iostream>
#include <limits>
#include <ctime>
#include "Libreria.cpp"

using namespace std;

int num[5] = {0};
int opcion, inmenu;

int main()
{
    do
    {
        switch (inmenu)
        {
        case 0:

            Menu();
            ValidarOpcionMenu(opcion);
        }

        switch (opcion)
        {
        case 1:

            Agregar_Digitos(num, 5, inmenu);
            
            break;

        case 2:

            imprimirArreglo(num, inmenu);
        }
    } while (opcion != 3);
}