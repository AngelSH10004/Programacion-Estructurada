/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 26/02/2024
 * Programa: Ejercicio3.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: Calculadora basica con 2 matrices
 *************************************/
#include <iostream>
#include <limits> // Para el rango de numeros enteros y flotantes.
using namespace std;

int matriz1[2][2] = {0};
int matriz2[2][2] = {0};
int matrizresultante[2][2];

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu_principal()
{
    cout << "\n==================================================";
    cout << "\nMenu principal.";
    cout << "\n1- Ingresar valores de la matrices.";
    cout << "\n2- Mostrar Matrices.";
    cout << "\n3- Sumar las dos matrices.";
    cout << "\n4- Restar las dos matrices. ";
    cout << "\n5- Multiplicar las dos matrices.";
    cout << "\n6- Borrar y editar valores.";
    cout << "\n7- Vaciar matrices.";
    cout << "\n8- Salir del programa.";
    cout << "\n==================================================";
    cout << "\nIngrese una opcion: ";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu_ingreso_de_matrices(int &numero, int &filas, int &columnas, int &menu_ingreso_de_datos)
{

    switch (menu_ingreso_de_datos)
    {
    case 0:
        do
        {
            cout << "\n==================================================";
            cout << "\nMenu de ingresar valores a las matrices.";
            cout << "\n1- Ingresar matriz 1";
            cout << "\n2- Ingresar matriz 2";
            cout << "\n3- Volver al menu principal.";
            cout << "\nIngrese una opcion: ";

            while (!(cin >> numero))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error, por favor ingrese un número entero válido";
                cout << "\n==================================================";
                cout << "\nMenu de ingresar valores a las matrices.";
                cout << "\n1- Ingresar matriz 1";
                cout << "\n2- Ingresar matriz 2";
                cout << "\nIngrese un  numero entre 1 y 2: ";
            }

            switch (numero)
            {
            case 1:
                do
                {
                    cout << "\n==================================================";
                    cout << "\nIngresaste a la primera matriz.";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la fila (0,1):";
                    while (!(cin >> filas))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Solo se permiten numeros.\n";
                        cout << "\n==================================================";
                        cout << "\nIngrese el valor de la fila (0,1):";
                    }
                    cout << "Ingrese el numero de Columnas (0,1):";
                    while (!(cin >> columnas))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Solo se permiten numeros.\n";
                        cout << "\n==================================================";
                        cout << "\nIngrese el valor de la columna (0,1):";
                    }
                    if (filas < 0 || filas > 1 || columnas < 0 || columnas > 1) //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.
                    {
                        cout << "Posicion incorrecta, las posiciones deben ser del (0 al 1). Intente de nuevo.\n";
                    }
                } while (filas < 0 || filas > 1 || columnas < 0 || columnas > 1);

                do // Validacion de que los numeros ingresados
                {
                    cout << "\nIngrese el numero que deseas poner para esa posicion: ";
                    while (!(cin >> numero))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Ingreso un dato invalido!" << endl;
                        cout << "Ingrese el numero que desea poner en esta posicion: ";
                    }

                    if (numero < -100 || numero > 100) // Validacion de que sea un numero entre -100 y 100, o mostrara el error
                    {
                        cout << "Numero incorrecto, Deber estar en el rango -100 al 100";
                    }

                } while (numero < -100 || numero > 100); // Solo permitira numeros del -100 al 100, de lo contrario entrara en bucle hasta que los valores entre en el rango que pide.

                // Asignar el número a la posición especificada
                matriz1[filas][columnas] = numero;

                // Imprimir la matriz
                cout << "\n==================================================";
                cout << "\nLa primera matriz es: \n";
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        cout << "[" << matriz1[i][j] << "] ";
                    }
                    cout << "\n";
                }
                cout << "\n==================================================";
                cout << "\nVolver al menu de ingresar valores =====> (0)";
                cout << "\n==================================================";
                cout << "\nIngrese el numero (0):";
                while (!(cin >> menu_ingreso_de_datos) || menu_ingreso_de_datos != 0) //  Comprobacion para que ingrese solo numeros enteros.
                {
                    cin.clear();                                         //   Limpieza del buffer.
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
                    cout << "Valor incorrecto,  vuelva a intentarlo.";
                    cout << "\n==================================================";
                    cout << "\nVolver al menu de ingresar valores =====> (0)";
                    cout << "\n==================================================";
                    cout << "\nIngrese el numero (0):";
                }
                break;

            case 2:

                do
                {
                    cout << "\n==================================================";
                    cout << "\nIngresaste a la segunda matriz.";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la fila (0,1):";
                    while (!(cin >> filas))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Solo se permiten numeros.\n";
                        cout << "\n==================================================";
                        cout << "\nIngrese el valor de la fila (0,1):";
                    }
                    cout << "Ingrese el numero de Columnas (0,1):";
                    while (!(cin >> columnas))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Solo se permiten numeros.\n";
                        cout << "\n==================================================";
                        cout << "\nIngrese el valor de la columna (0,1):";
                    }
                    if (filas < 0 || filas > 1 || columnas < 0 || columnas > 1) //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.
                    {
                        cout << "Posicion incorrecta, las posiciones deben ser del (0 al 1). Intente de nuevo.\n";
                    }
                } while (filas < 0 || filas > 1 || columnas < 0 || columnas > 1);

                do // Validacion de que los numeros ingresados
                {
                    cout << "\nIngrese el numero que deseas poner para esa posicion: ";
                    while (!(cin >> numero))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Ingreso un dato invalido!" << endl;
                        cout << "Ingrese el numero que desea poner en esta posicion: ";
                    }

                    if (numero < -100 || numero > 100) // Validacion de que sea un numero entre -100 y 100, o mostrara el error
                    {
                        cout << "Numero incorrecto, Deber estar en el rango -100 al 100";
                    }

                } while (numero < -100 || numero > 100); // Solo permitira numeros del -100 al 100, de lo contrario entrara en bucle hasta que los valores entre en el rango que pide.

                // Asignar el número a la posición especificada
                matriz2[filas][columnas] = numero;

                // Imprimir la matriz
                cout << "\n==================================================";
                cout << "\nLa segunda matriz es: \n";
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        cout << "[" << matriz2[i][j] << "] ";
                    }
                    cout << "\n";
                }
                cout << "\n==================================================";
                cout << "\nVolver al menu de ingresar valores =====> (0)";
                cout << "\n==================================================";
                cout << "\nIngrese el numero (0):";
                while (!(cin >> menu_ingreso_de_datos) || menu_ingreso_de_datos != 0) //  Comprobacion para que ingrese solo numeros enteros.
                {
                    cin.clear();                                         //   Limpieza del buffer.
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
                    cout << "Valor incorrecto,  vuelva a intentarlo.";
                    cout << "\n==================================================";
                    cout << "\nVolver al menu de ingresar valores =====> (0)";
                    cout << "\n==================================================";
                    cout << "\nIngrese el numero (0):";
                }
            }
        } while (numero != 3);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void mostrar_ambas_matrices(int &inmenu)
{
    // Imprimir la matriz
    cout << "\n==================================================";
    cout << "\nLa primera matriz es: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "[" << matriz1[i][j] << "] ";
        }
        cout << "\n";
    }
    // Imprimir la matriz
    cout << "\n==================================================";
    cout << "\nLa Segunda matriz es: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "[" << matriz2[i][j] << "] ";
        }
        cout << "\n";
    }
    cout << "\n==================================================";
    cout << "\nVolver al menu =====> (0)";
    cout << "\n==================================================";
    cout << "\nIngrese el numero (0):";
    while (!(cin >> inmenu) || inmenu != 0) //  Comprobacion para que ingrese solo numeros enteros.
    {
        cin.clear();                                         //   Limpieza del buffer.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
        cout << "\n==================================================";
        cout << "\nVolver al menu =====> (0)";
        cout << "\n==================================================";
        cout << "\nIngrese el numero (0):";
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Funcion que muestra los resultados de las operaciones realizadas en las matrices.
void suma_de_matrices(int &inmenu)
{
    int sumaMatriz1 = 0, sumaMatriz2 = 0, sumaTotal = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizresultante[i][j] = matriz1[i][j] + matriz2[i][j];
            sumaMatriz1 += matriz1[i][j];
            sumaMatriz2 += matriz2[i][j];
        }
    }

    // Calcular la suma total de las sumas de cada matriz
    sumaTotal = sumaMatriz1 + sumaMatriz2;

    // Imprimir la matriz resultante
    cout << "\n==================================================";
    cout << "\nLa matriz resultante es: ";
    cout << sumaTotal;
    cout << "\n==================================================";
    cout << "\nVolver al menu =====> (0)";
    cout << "\n==================================================";
    cout << "\nIngrese el numero (0):";
    while (!(cin >> inmenu) || inmenu != 0) //  Comprobacion para que ingrese solo numeros enteros.
    {
        cin.clear();                                         //   Limpieza del buffer.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
        cout << "\n==================================================";
        cout << "\nVolver al menu =====> (0)";
        cout << "\n==================================================";
        cout << "\nIngrese el numero (0):";
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Funcion que realiza la resta de dos matrices.
void resta_de_matrices(int &inmenu)
{
    int restaMatriz1 = 0, restaMatriz2 = 0, restaTotal = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizresultante[i][j] = matriz1[i][j] - matriz2[i][j];
            restaMatriz1 += matriz1[i][j];
            restaMatriz2 += matriz2[i][j];
        }
    }

    // Resta total
    restaTotal = restaMatriz1 - restaMatriz2;
    // Imprimir la matriz resultante
    cout << "\n==================================================";
    cout << "\nLa matriz resultante es: ";
    cout << restaTotal;
    cout << "\n==================================================";
    cout << "\nVolver al menu =====> (0)";
    cout << "\n==================================================";
    cout << "\nIngrese el numero (0):";
    while (!(cin >> inmenu) || inmenu != 0) //  Comprobacion para que ingrese solo numeros enteros.
    {
        cin.clear();                                         //   Limpieza del buffer.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
        cout << "\n==================================================";
        cout << "\nVolver al menu =====> (0)";
        cout << "\n==================================================";
        cout << "\nIngrese el numero (0):";
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Funcion que realiza la multiplicacion.
void multiplicacion_de_matrices(int &inmenu)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizresultante[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    // Imprimir la matriz resultante
    cout << "\n==================================================";
    cout << "\nLa matriz resultante es: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "[" << matrizresultante[i][j] << "] ";
        }
        cout << "\n";
    }
    cout << "\n==================================================";
    cout << "\nVolver al menu =====> (0)";
    cout << "\n==================================================";
    cout << "\nIngrese el numero (0):";
    while (!(cin >> inmenu) || inmenu != 0) //  Comprobacion para que ingrese solo numeros enteros.
    {
        cin.clear();                                         //   Limpieza del buffer.
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
        cout << "\n==================================================";
        cout << "\nVolver al menu =====> (0)";
        cout << "\n==================================================";
        cout << "\nIngrese el numero (0):";
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Funcion que muestra opciones para borrar y editar.
void borrar_y_editar(int &opcion, int &nuevonumero, int &filas, int &columnas, int &menu_borrar_editar)
{
    cout << "\n==================================================";
    cout << "\nBorrado de valores y Edicion de valores.";
    cout << "\n1- Borrar un valor de una de las matrices.";
    cout << "\n2- Editar una de las dos matrices.";
    cout << "\nIngresa una opcion (1 al 2): ";
    while (!(cin >> opcion))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error! Por favor ingrese un numero entero." << endl;
        menu_principal();
    }

    switch (opcion)
    {
    case 1:
        cout << "\n==================================================";
        cout << "\nBorrado de valores y Edicion de valores.";
        cout << "\n1- Borrar matriz 1.";
        cout << "\n2- Borrar matriz 2.";
        cout << "\nIngresa una opcion (1 al 2): ";
        while (!(cin >> menu_borrar_editar))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Por favor ingrese un numero entero." << endl;
            menu_principal();
        }

        switch (menu_borrar_editar)
        {
        case 1:

            do
            {
                cout << "\n==================================================";
                cout << "\nIngresaste a la primera matriz.";
                cout << "\n==================================================";
                cout << "\nIngrese el valor de la fila (0,1):";
                while (!(cin >> filas))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Solo se permiten numeros.\n";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la fila (0,1):";
                }
                cout << "Ingrese el numero de Columnas (0,1):";
                while (!(cin >> columnas))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Solo se permiten numeros.\n";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la columna (0,1):";
                }
                if (filas < 0 || filas > 1 || columnas < 0 || columnas > 1) //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.
                {
                    cout << "Posicion incorrecta, las posiciones deben ser del (0 al 1). Intente de nuevo.\n";
                }
            } while (filas < 0 || filas > 1 || columnas < 0 || columnas > 1);

            // Asignar el número a la posición especificada
            matriz1[filas][columnas] = 0;
            break;

        case 2:
            do
            {
                cout << "\n==================================================";
                cout << "\nIngresaste a la primera matriz.";
                cout << "\n==================================================";
                cout << "\nIngrese el valor de la fila (0,1):";
                while (!(cin >> filas))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Solo se permiten numeros.\n";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la fila (0,1):";
                }
                cout << "Ingrese el numero de Columnas (0,1):";
                while (!(cin >> columnas))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Solo se permiten numeros.\n";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la columna (0,1):";
                }
                if (filas < 0 || filas > 1 || columnas < 0 || columnas > 1) //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.
                {
                    cout << "Posicion incorrecta, las posiciones deben ser del (0 al 1). Intente de nuevo.\n";
                }
            } while (filas < 0 || filas > 1 || columnas < 0 || columnas > 1);

            // Asignar el número a la posición especificada
            matriz2[filas][columnas] = 0;
            break;
        }
        break;

    // Editar las matrices.
    case 2:
        cout << "Seleciona una opcion para editar un valor de una matriz.";
        cout << "\n1- Matriz 1";
        cout << "\n2- Matriz 2";
        cout << "\nIngrese su eleccion: ";
        while (!(cin >> opcion))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Por favor ingrese un numero entero." << endl;
            menu_principal();
        }

        switch (opcion)
        {
        case 1:
            do
            {
                cout << "\n==================================================";
                cout << "\nIngresaste a la primera matriz para editar.";
                cout << "\n==================================================";
                cout << "\nIngrese el valor de la fila (0,1):";
                while (!(cin >> filas))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Solo se permiten numeros.\n";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la fila (0,1):";
                }
                cout << "Ingrese el numero de Columnas (0,1):";
                while (!(cin >> columnas))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Solo se permiten numeros.\n";
                    cout << "\n==================================================";
                    cout << "\nIngrese el valor de la columna (0,1):";
                }
                if (filas < 0 || filas > 1 || columnas < 0 || columnas > 1) //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.
                {
                    cout << "Posicion incorrecta, las posiciones deben ser del (0 al 1). Intente de nuevo.\n";
                }

                do // Validacion de que los numeros ingresados
                {
                    cout << "\nIngrese el numero nuevo que deseas poner para esa posicion: ";
                    while (!(cin >> nuevonumero))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Error! Ingreso un dato invalido!" << endl;
                        cout << "Ingrese el numero que desea poner en esta posicion: ";
                    }

                    if (nuevonumero < -100 || nuevonumero > 100) // Validacion de que sea un numero entre -100 y 100, o mostrara el error
                    {
                        cout << "Numero incorrecto, Deber estar en el rango -100 al 100";
                    }

                } while (nuevonumero < -100 || nuevonumero > 100); // Solo permitira numeros del -100 al 100, de lo contrario entrara en bucle hasta que los valores entre en el rango que pide.

            } while (filas < 0 || filas > 1 || columnas < 0 || columnas > 1); //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.

            // Asignar el número a la posición especificada
            matriz1[filas][columnas] = nuevonumero;
            break;

        case 2:

            cout << "\n==================================================";
            cout << "\nIngresaste a la primera matriz para editar.";
            cout << "\n==================================================";
            cout << "\nIngrese el valor de la fila (0,1):";
            while (!(cin >> filas))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error! Solo se permiten numeros.\n";
                cout << "\n==================================================";
                cout << "\nIngrese el valor de la fila (0,1):";
            }
            cout << "Ingrese el numero de Columnas (0,1):";
            while (!(cin >> columnas))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error! Solo se permiten numeros.\n";
                cout << "\n==================================================";
                cout << "\nIngrese el valor de la columna (0,1):";
            }
            if (filas < 0 || filas > 1 || columnas < 0 || columnas > 1) //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.
            {
                cout << "Posicion incorrecta, las posiciones deben ser del (0 al 1). Intente de nuevo.\n";
            }

            do // Validacion de que los numeros ingresados
            {
                cout << "\nIngrese el numero nuevo que deseas poner para esa posicion: ";
                while (!(cin >> nuevonumero))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error! Ingreso un dato invalido!" << endl;
                    cout << "Ingrese el numero que desea poner en esta posicion: ";
                }

                if (nuevonumero < -100 || nuevonumero > 100) // Validacion de que sea un numero entre -100 y 100, o mostrara el error
                {
                    cout << "Numero incorrecto, Deber estar en el rango -100 al 100";
                }

            } while (nuevonumero < -100 || nuevonumero > 100); // Solo permitira numeros del -100 al 100, de lo contrario entrara en bucle hasta que los valores entre en el rango que pide.
        }
        while (filas < 0 || filas > 1 || columnas < 0 || columnas > 1)
            ; //  Si no esta dentro del rango 0 al 1, mostrando el error y que lo vuelva a poner.

        // Asignar el número a la posición especificada
        matriz2[filas][columnas] = nuevonumero;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Variables utilizadas.
int inmenu, opcion, ingreso_de_matrices, filas, columnas, numero, nuevonumero, menu_borrar_editar, menu_ingreso_de_datos;

int main()
{
    do // Usamo un bucle para  que el usuario pueda elegir entre varias opciones.
    {
        switch (inmenu) // El menu principal
        {
        case 0:
            menu_principal();
            while (!(cin >> opcion)) //  Verificamos si se ha ingresado una opción valida.
            {
                cin.clear(); // Verificar si la entrada  es valida o no.
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error! Por favor ingrese un numero entero." << endl;
                menu_principal();
            }
            break;
        }

        switch (opcion) // Las opciones del menu principal.
        {
        case 1:
            menu_ingreso_de_matrices(numero, filas, columnas, menu_ingreso_de_datos);
            break;
        case 2:
            mostrar_ambas_matrices(inmenu);
            break;
        case 3:
            suma_de_matrices(inmenu);
            break;
        case 4:
            resta_de_matrices(inmenu);
            break;
        case 5:
            multiplicacion_de_matrices(inmenu);
            break;
        case 6:
            borrar_y_editar(filas, columnas, nuevonumero, menu_borrar_editar, opcion);
            break;
        case 7:
            // Borrar valores de la primera matriz
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    matriz1[i][j] = 0;
                }
            }

            // Borrar valores de la segunda matriz
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    matriz2[i][j] = 0;
                }
            }
            cout << "\nHaz eliminado  los datos de ambas matrices.\n";
            cout << "\n==================================================";
            cout << "\nVolver al menu =====> (0)";
            cout << "\n==================================================";
            cout << "\nIngrese el numero (0):";
            while (!(cin >> inmenu) || inmenu != 0) //  Comprobacion para que ingrese solo numeros enteros.
            {
                cin.clear();                                         //   Limpieza del buffer.
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es una opcion valida.
                cout << "Valor incorrecto,  vuelva a intentarlo.";
                cout << "\n==================================================";
                cout << "\nVolver al menu =====> (0)";
                cout << "\n==================================================";
                cout << "\nIngrese el numero (0):";
            }

            break;
        }

    } while (opcion != 8);
}