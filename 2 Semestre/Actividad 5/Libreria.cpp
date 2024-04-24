#include <iostream>
using namespace std; //  Uso de la libreria STD.

void MenuPrincipal()
{
    //  Mostramos los mensajes del menu.
    cout << "\n==================================================\n";
    cout << "Menu Principal\n";
    cout << "1 - Ingresar un valor en la posicion que quieras.\n";
    cout << "2 - Mostrar la lista de valores.\n";
    cout << "3 - Mostrar sumatoria de todos los elementos.\n";
    cout << "4 - Borrado y edicion de elementos.\n";
    cout << "5 - Vaciar el Arreglo.\n";
    cout << "6 - Salir.\n";
    cout << "\n==================================================\nIngrese una Opcion del Menu [0-6]: ";
}

void Agregar_Digitos(int (&num)[50])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "\n==================================================";
        cout << "\nIngrese un valor y se le asignaraen la posicion: " << endl;
        cin >> num[i];
    }
    cout << "\n==================================================";
    cout << "\nVolver al menu.\n";
    cout << "(0)-No.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del (0):";
    
}