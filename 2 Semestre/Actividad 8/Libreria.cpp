#include <iostream>
#include <ctime>
#include <limits>
#include <cstdlib>
using namespace std; //  Uso de la libreria STD.

// Funciones de validaciones
// ===============================================================================================================================

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

bool ValidacionDeCaso4(int &caso4)
{
    while (!(cin >> caso4) || caso4 < 1 || caso4 > 2) //    Verifica que sea un entero y no otro tipo de dato.
    {
        cin.clear();                                         //       Limpia el buffer si hubiera algo mal escrito.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es un entero.
        cout << "Valor invalido. ";

        cout << "\n==================================================";
        cout << "Algortimos de Ordenamiento.\n";
        cout << "1 - Burbuja.\n";
        cout << "2 - Quicksort.\n";
        cout << "\n==================================================";
        cout << "\nIngrese el numero del [1-2]: ";
    }
    return true; // Retorna true si la entrada fue exitosa.
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool ValidacionDeCaso6(int &caso6)
{
    while (!(cin >> caso6) || caso6 < 1 || caso6 > 2) //    Verifica que sea un entero y no otro tipo de dato.
    {
        cin.clear();                                         //       Limpia el buffer si hubiera algo mal escrito.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es un entero.
        cout << "Valor invalido. ";

        cout << "\n==================================================\n";
        cout << "Borrar elemento o Editar elemento.\n";
        cout << "1 - Ingrese la posicion para borrar elemento de la lista: \n";
        cout << "2 - Ingrese la posicion que quieras editar de la lista: \n";
        cout << "\n==================================================\nIngrese una Opcion del Menu [1-2]: ";
    }
    return true; // Retorna true si la entrada fue exitosa.
}

bool ValidacionDeCaso7(int &caso7)
{
    while (!(cin >> caso7) || caso7 < 1 || caso7 > 2) //    Verifica que sea un entero y no otro tipo de dato.
    {
        cin.clear();                                         //       Limpia el buffer si hubiera algo mal escrito.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es un entero.
        cout << "Valor invalido. ";

        cout << "\n==================================================\n";
        cout << "Desea borra el arreglo?.\n";
        cout << "1 - Si \n";
        cout << "2 - No \n";
        cout << "\n==================================================\nIngrese una Opcion del Menu [1-2]: ";
    }
    return true; // Retorna true si la entrada fue exitosa.
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Funciones del Menu Principal
// ===============================================================================================================================
void MenuPrincipal()
{
    //  Mostramos los mensajes del menu.
    cout << "\n==================================================\n";
    cout << "Menu Principal\n";
    cout << "1 - Ingresar un valor en la posicion que quieras.\n";
    cout << "2 - Mostrar la lista de valores.\n";
    cout << "3 - Mostrar sumatoria de todos los elementos.\n";
    cout << "4 - Algoritmos de ordenamientos.\n";
    cout << "5 - Algoritmo de busqueda binaria.\n";
    cout << "6 - Borrado y edicion de elementos.\n";
    cout << "7 - Vaciar el Arreglo.\n";
    cout << "8 - Salir.\n";
    cout << "==================================================\nIngrese una Opcion del Menu [0-8]: ";
}

bool validarOpcionMenu(int &opcion)
{
    while (!(cin >> opcion))
    {
        cin.clear();                                         // Vacía el buffer de entrada.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiando buffer.
        cout << "Valor invalido. Por favor, ingrese un numero valido: ";
        MenuPrincipal();
    }
    return true; // Retorna true si la entrada fue exitosa.
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Funciones del Caso 1
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void GeneracionDeNumeros(int num[], int tamano)
{
    srand(time(NULL)); //  Genera un numero aleatorio
    for (int i = 0; i < tamano; i++)
    {
        bool repetido;
        do
        {
            repetido = false;
            num[i] = 1 + rand() % 200; // Genera un número aleatorio en el rango de 1 a 200
            for (int j = 0; j < i; j++)
            {
                if (num[i] == num[j])
                {
                    repetido = true;
                    break;
                }
            }
        } while (repetido);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Funciones del Caso 2
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MostrarLista(int num[], int tamano)
{
    cout << "\n==================================================";
    cout << "\nLa lista es: ";
    for (int i = 0; i < tamano; i++) //    Recorre las posiciones de la lista.
    {
        if (num[i] != 0) //    Verifica si no ha sido borrada esa posicion.
        {
            cout << i + 1 << "-{" << num[i] << "} "; //    Imprime los numeros separados por comas.
        }
        else
        {
            cout << i + 1 << "-[Null] "; //     Si fue borrada muestra Null.
        }
    }

    cout << "\n==================================================";
    cout << "\nVolver al menu.\n";
    cout << "(0)-No.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del (0):";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Funciones del Caso 3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SumaDelArreglo(int num[], int tamano)
{
    int suma = 0; //  Inicializa a cero para poder ir sumando./ por lo tanto se reinicia el valor cuando vuelves a seleccionar el caso de la suma.
    cout << "\n==================================================";
    cout << "\nSumando los elementos de la lista: ";
    for (int i = 0; i < tamano; i++) //    Suma todos los elemntos de la lista.
    {
        suma += num[i]; //       Asigna a suma el valor del elemento actual.
    }
    cout << suma;

    cout << "\n==================================================";
    cout << "\nVolver al menu.\n";
    cout << "(0)-No.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del (0):";
}

// Funciones del Caso 4
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MenuCaso4()
{
    cout << "\n==================================================\n";
    cout << "Algortimos de Ordenamiento.\n";
    cout << "1 - Burbuja.\n";
    cout << "2 - Quicksort.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del [1-2]: ";
}

// Implementación optimizada de Bubble Sort
void Burbuja(int num[], int n)
{
    bool verifica;
    do
    {
        verifica = false;
        for (int i = 0; i < (n - 1); i++)
        {
            if (num[i] > num[i + 1])
            {
                verifica = true;
                for (; i < (n - 1); i++)
                {
                    if (num[i] > num[i + 1])
                    {
                        swap(num[i], num[i + 1]);
                    }
                }
            }
        }
    } while (verifica);
}

// Función para mostrar el arreglo
void MostrarArreglo(int num[], int tamano, int inmenu)
{
    cout << "\n==================================================\n";
    cout << "La lista de numeros ordenados por Burbuja es: \n";
    for (int i = 0; i < tamano; i++) //    Recorre las posiciones de la lista.
    {
        if (num[i] != 0) //    Verifica si no ha sido borrada esa posicion.
        {
            cout << i + 1 << "-{" << num[i] << "} "; //    Imprime los numeros separados por comas.
        }
        else
        {
            cout << i + 1 << "[Null]"; //     Si fue borrada muestra Null.
        }
    }

    cout << "\n==================================================";
    cout << "\nVolver al menu.\n";
    cout << "(0)-Si.\n";
    cout << "\n==================================================";
    cout << "\nIngrese el numero del (0):";
    ValidacionDeMenu(inmenu);
}

// Declaración de la función de partición para Quicksort
int particion(int num[], int inicio, int fin);

// Implementación de Quicksort
void Quicksort(int num[], int inicio, int fin)
{
    if (inicio < fin)
    {
        int pivot = particion(num, inicio, fin);
        Quicksort(num, inicio, pivot - 1);
        Quicksort(num, pivot + 1, fin);
    }
}

// Función de partición para Quicksort
int particion(int num[], int inicio, int fin)
{
    int pivote = num[fin];
    int i = (inicio - 1);

    for (int j = inicio; j <= fin - 1; j++)
    {
        if (num[j] < pivote)
        {
            i++;
            swap(num[i], num[j]);
        }
    }
    swap(num[i + 1], num[fin]);
    return (i + 1);
}

// Funcion del menu del caso4
void SwitchCaso4(int caso4, int num[], int inmenu)
{
    switch (caso4)
    {
    case 1:

        Burbuja(num, 50);
        MostrarArreglo(num, 50, inmenu);

        break;

    case 2:

        Quicksort(num, 0, 50 - 1);
        MostrarArreglo(num, 50, inmenu);

        break;
    }
}

// Funciones del Caso 5
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Función de búsqueda binaria
int BusquedaBinaria(int num[], int inicio, int fin, int objetivo)
{
    while (inicio <= fin)
    {
        int medio = inicio + (fin - inicio) / 2;

        // Si el objetivo está en el medio
        if (num[medio] == objetivo)
            return medio;

        // Si el objetivo es mayor, ignora la mitad izquierda
        if (num[medio] < objetivo)
            inicio = medio + 1;

        // Si el objetivo es menor, ignora la mitad derecha
        else
            fin = medio - 1;
    }

    // Si el elemento no está presente en el arreglo
    return -1;
}

void MostrarNumero(int num[])
{
    int objetivo;
    cout << "\n==================================================\n";
    cout << "Ingrese el numero a buscar: ";
    cin >> objetivo;
    int resultado = BusquedaBinaria(num, 0, 49, objetivo); // Llamada a la función de búsqueda binaria
    if (resultado != -1)
    {
        cout << "El numero " << objetivo << " se encuentra en la posicion " << resultado + 1 << " del arreglo." << endl;
    }
    else
    {
        cout << "El numero " << objetivo << " no se encuentra en el arreglo." << endl;
    }
}

// Funciones del Caso 6
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void BorradoYEdicion(int caso6, int pos, int inmenu, int valor, int num[])
{
    cout << "\n==================================================\n";
    cout << "Borrar elemento o Editar elemento.\n";
    cout << "1 - Ingrese la posicion para borrar elemento de la lista: \n";
    cout << "2 - Ingrese la posicion que quieras editar de la lista: \n";
    cout << "\n==================================================\nIngrese una Opcion del Menu [1-2]: ";
    ValidacionDeCaso6(caso6);
    if (caso6 >= 1 && caso6 < 3) // Verifica si la posicion esta dentro del rango permitido.
    {
        switch (caso6) //    Segun la opcion que eliga el usuario, realiza las operaciones correspondientes
        {
        case 1: //    Eliminar un elemento de la lista.
            cout << "Ingrese la posicion a eliminar: ";
            cin >> pos;
            if (pos >= 0 && pos <= 49) //    Verifica si la posicion esta dentro del rango permitido.
            {
                num[pos] = 0;                                                       //   Asigna 0 a la posicion que se qui
                cout << "Elemento en la posicion " << pos << " ha sido borrado.\n"; //  Mostramos mensaje de confirmacion.
            }
            else //  Si no esta dentro del rango permitido.
            {
                cout << "Error, posicion incorrecta.\n";
                cout << "\n==================================================";
                cout << "\nVolver al menu.\n";
                cout << "(0)-No.\n";
                cout << "\n==================================================";
                cout << "\nIngrese el numero del (0):";
                ValidacionDeMenu(inmenu);
            }

            break;

        case 2: //     Modificar un elemento de la lista.
            cout << "Ingrese la posicion para editar: ";
            cin >> pos;
            cout << "Ingrese el nuevo numero: ";
            cin >> valor;

            if (pos >= 0 && pos < 50) // Verifica si la posicion esta dentro del rango permitido.
            {
                num[pos] = valor;                                                                     // Asigna el nuevo valor a la posicion indicada por el usuario.
                cout << "Elemento en la posicion " << pos << " ha sido editado a: " << valor << "\n"; //  Muestra el mensaje con los nuevos valores.
            }
            else //  Si no esta dentro del rango permitido.
            {
                cout << "Posicion invalida.\n";
            }
        }
    }
    else //  Si no esta dentro del rango permitido.
    {
        cout << "Valor invalido.\n";
    }

    if (pos >= 0 && pos < 50) // Verifica si la posicion esta dentro del rango permitido.
    {
        num[pos] = valor;                                                                     // Asigna el nuevo valor a la posicion indicada por el usuario.
        cout << "Elemento en la posicion " << pos << " ha sido editado a: " << valor << "\n"; //  Muestra el mensaje con los nuevos valores.
    }
    else //  Si no esta dentro del rango permitido.
    {
        cout << "Posicion invalida.\n";
    }
}

// Funciones del Caso 7
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void BorrarArreglo(int inmenu, int caso7, int num[])
{
    cout << "\n==================================================\n";
    cout << "Desea borra el arreglo?.\n";
    cout << "1 - Si \n";
    cout << "2 - No \n";
    cout << "\n==================================================\nIngrese una Opcion del Menu [1-2]: ";
    ValidacionDeCaso7(caso7);

        if (caso7 >= 1 && caso7 < 3) // Verifica si la posicion esta dentro del rango permitido.
    {
        switch (caso7) //  Segun la opcion elegida por el usuario, realiza una accion u otra.
        {
        case 1:                          //  Elimina todos los elementos de la lista.
            for (int i = 0; i < 50; ++i) //  Inicializacion y asignacion de valores.
            {
                num[i] = 0; //  Se le asigna el valor 0 para eliminarlo.
            }
            cout << "Arreglo vacio.\n";
            break;
        case 2: //   Continua con las operaciones normales.

            if (inmenu >= 0 && inmenu < 1) // Verifica si la posicion esta dentro del rango permitido.
            {
                cout << "\n==================================================";
                cout << "\nVolver al menu.\n";
                cout << "(0)-No.\n";
                cout << "\n==================================================";
                cout << "\nIngrese el numero del (0):";
                while (!(cin >> inmenu) || inmenu != 0) //  Valida que sea un dato numerico.
                {
                    cin.clear();                                         //  Limpia el buffer del flujo de entrada.
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //   Limpia el buffer hasta encontrar un salto de linea o EOF.
                    cout << "Valor invalido. \nIngrese un valor numerico: ";
                }
                break;
            }
            else //  Si no esta dentro del rango permitido.
            {
                cout << "Valor invalido.\n";
            }
        }
    }
    else //  Si no esta dentro del rango permitido.
    {
        cout << "Valor invalido.\n";
    }
}