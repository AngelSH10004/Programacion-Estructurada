/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 06/03/2024
 * Programa: Ejercicio7.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: Conjuntos con arreglos
 *************************************/

#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Funcion que muestra los elementos
vector<string> conjunto1;
vector<string> conjunto2;
// Libreria perzonalizada
#include "libreria.cpp"

int main()
{
    int inmenu = 0, menu_de_ingreso_de_datos = 0, opcion;
    int numero, elemento_conjunto1 = 0, elemento_conjunto2 = 0;
    int menu_de_operaciones_de_conjuntos;

    do
    {
        switch (inmenu)
        {
        case 0:
            menu_principal();
            while (!(cin >> opcion))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                menu_principal();
            }
        }

        switch (opcion)
        {
        case 1:
            ingreso_de_valores_en_conjunto(menu_de_ingreso_de_datos, numero, elemento_conjunto1, elemento_conjunto2);
            break;
        case 2:
            mostrar_conjuntos(conjunto1, conjunto2);
            break;
        case 3:
            operaciones_de_conjuntos(numero, menu_de_operaciones_de_conjuntos);
            break;
        case 4:
            borrar_y_editar_valores(conjunto1, conjunto2);
            break;
        case 5:
            vaciado_de_conjuntos();
        }
    } while (opcion != 6);
}
