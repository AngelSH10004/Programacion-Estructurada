#include <iostream>
#include <limits>
#include <ctime>

using namespace std;

void Menu()
{
    cout << "========================================\n";
    cout << "Menu Principal.\n";
    cout << "1.- Agregar los digitos en el Arreglo.\n";
    cout << "2.- Mostrar los digitos del Arreglo.\n";
    cout << "3.- Salir.\n";
    cout << "========================================\nIngrese una Opcion del Menu [1-3]:";
}

bool ValidarOpcionMenu(int &opcion)
{
    while (!(cin >> opcion))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Opcion Invalida.\n";
        Menu();
    }
    return true;
}

bool ValidacionDeMenu(int inmenu)
{
    while (!(cin >> inmenu) || inmenu != 0) //    Verifica que sea un entero y no otro tipo de dato.
    {
        cin.clear();                                         //       Limpia el buffer si hubiera algo mal escrito.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es un entero.
        cout << "Valor invalido. ";

        cout << "\n==================================================";
        cout << "\nVolver al menu.\n";
        cout << "(0)-Si.\n";
        cout << "\n==================================================";
        cout << "\nIngrese el numero del (0):";
    }
    return true; // Retorna true si la entrada fue exitosa.
}

// Funciones para el Arreglo
///////////////////////////////////////////////////////////////////////////////////

void Agregar_Digitos(int num[], int n, int inmenu)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n==================================================";
        cout << "\nIngrese un valor y se le asignaraen la posicion: ";
        cin >> num[i];
    }
    cout << "\n==================================================";
    cout << "\nVolver al menu.\n";
    cout << "(0)-Si.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del (0):";
    ValidacionDeMenu(inmenu);
}

// Funcion recursiva para mostrar el arreglo.
///////////////////////////////////////////////////////////////////////////////////

// Función auxiliar para imprimir los elementos del arreglo
void imprimirElementos(int num[], int n)
{
    if (n <= 0)
    {
        return; // Caso base: si el tamaño del arreglo es 0, termina la recursión
    }
    cout << "[" << num[0] << "]"; // Imprime el primer elemento con corchetes
    if (n > 1)
    {
        cout << ", "; // Agrega una coma si hay más elementos
    }
    // Llama a sí misma con el resto del arreglo y el tamaño reducido
    imprimirElementos(num + 1, n - 1);
}

void imprimirArreglo(int num[], int inmenu)
{
    // Solo imprime el mensaje "La lista es: " una vez al principio
    cout << "\n==================================================";
    cout << "\nLa lista es: ";
    // Llama a la función auxiliar para imprimir los elementos
    imprimirElementos(num, 5);

    cout << "\n==================================================";
    cout << "\nVolver al menu.\n";
    cout << "(0)-Si.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del (0):";
    ValidacionDeMenu(inmenu);
}
