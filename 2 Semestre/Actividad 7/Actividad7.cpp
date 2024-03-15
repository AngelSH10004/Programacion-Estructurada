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

void menu_principal()
{
    cout << "\n==================================================";
    cout << "\nMenu principal.";
    cout << "\n1- Ingresar los elementos del conjunto (5 al infinito los elementos).";
    cout << "\n2- Mostrar los conjuntos creados.";
    cout << "\n3- Operaciones de Conjuntos.";
    cout << "\n4- Borrar y Editar de valores. ";
    cout << "\n5- Vaciado de conjuntos.";
    cout << "\n6- Salir del programa.";
    cout << "\n==================================================";
    cout << "\nIngrese una opcion: ";
}

// Esta función permite ingresar los valores para uno de dos conjuntos, dependiendo de la opción seleccionada por el usuario.
void ingreso_de_valores_en_conjunto(int &menu_de_ingreso_de_datos, int &numero, int &elemento_conjunto1, int &elemento_conjunto2)
{
    /**
     * Esta función permite ingresar los valores para uno de dos conjuntos, dependiendo de la opción seleccionada por el usuario.
     *
     * menu_de_ingreso_de_datos: La opción seleccionada en el menú principal.
     * numero: Variable para almacenar la opción ingresada por el usuario.
     * elemento_conjunto1: Número de elementos que se ingresarán en el conjunto 1.
     * elemento_conjunto2: Número de elementos que se ingresarán en el conjunto 2.
     */
    switch (menu_de_ingreso_de_datos)
    {
    case 0:
        do
        {
            cout << "\n==================================================";
            cout << "\nMenu principal.";
            cout << "\n1- Ingresar datos del conjunto 1.";
            cout << "\n2- Ingresar datos del conjunto 2.";
            cout << "\n3- Salir de este menu.";
            cout << "\n==================================================";
            cout << "\nIngrese una opcion: ";
            while (!(cin >> numero))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n==================================================";
                cout << "\nMenu principal.";
                cout << "\n1- Ingresar datos del conjunto 1.";
                cout << "\n2- Ingresar datos del conjunto 2.";
                cout << "\n3- Salir del programa.";
                cout << "\n==================================================";
                cout << "\nIngrese una opcion: ";
            }

            switch (numero)
            {
            case 1:

                if (!conjunto1.empty()) // Comprobamos con el .empty si el vector esta vacio
                {
                    cout << "\n==================================================";
                    cout << "\n!!!ERROR!!!. Debes borrar o editar los datos del conjunto 1 antes de ingresar nuevos elementos.";
                    continue; // Volver al inicio del bucle do-while para ingresar otra opción
                }

                do
                {
                    cout << "\n==================================================";
                    cout << "\nIngresa los elementos que tendra tu conjunto, (!!Tiene que ser mayor o igual a 5.!!)";
                    cout << "\n==================================================";
                    cout << "\nIngrese el elemento: ";
                    cin >> elemento_conjunto1;
                    if (elemento_conjunto1 < 5)
                    {
                        cout << "\n==================================================";
                        cout << "\n!!!ERROR!!!.El rango del conjunto debe ser mayor o igual a 5.";
                        continue;
                    }
                } while (elemento_conjunto1 < 5);

                conjunto1.resize(elemento_conjunto1); // Ajusta el tamaño del vector gracias al resize()

                cout << "\n==================================================";
                cout << "\nHaz asignado los elementos: " << elemento_conjunto1 << " posiciones.";
                cout << "\n==================================================";
                cout << "\nAhora ingresa los valores dentro del conjunto";
                cout << "\n==================================================";
                cin.ignore();
                for (int i = 0; i < elemento_conjunto1; i++)
                {
                    cout << "\nIngrese el elemento " << (i + 1) << " de conjunto1: ";
                    // Ignora el salto de línea anterior
                    getline(cin, conjunto1[i]); // Almacena el valor ingresado por el usuario
                }
                break;

            case 2:

                if (!conjunto2.empty()) // Comprobamos con el .empty si el vector esta vacio
                {
                    cout << "\n==================================================";
                    cout << "\n!!!ERROR!!!. Debes borrar o editar los datos del conjunto 2 antes de ingresar nuevos elementos.";
                    continue; // Volver al inicio del bucle do-while para ingresar otra opción
                }

                do
                {
                    cout << "\n==================================================";
                    cout << "\nIngresa los elementos que tendra tu conjunto, (!!Tiene que ser mayor o igual a 5.!!)";
                    cout << "\n==================================================";
                    cout << "\nIngrese el elemento: ";
                    cin >> elemento_conjunto2;
                    if (elemento_conjunto2 < 5)
                    {
                        cout << "\n==================================================";
                        cout << "\n!!!ERROR!!!.El rango del conjunto debe ser mayor o igual a 5.";
                        continue;
                    }
                } while (elemento_conjunto2 < 5);

                conjunto2.resize(elemento_conjunto2); // Ajusta el tamaño del vector gracias al resize()

                cout << "\n==================================================";
                cout << "\nHaz asignado los elementos: ";
                cout << "\n==================================================";
                cout << "\nAhora ingresa los valores dentro del conjunto";
                cout << "\n==================================================";
                cin.ignore();
                for (int i = 0; i < elemento_conjunto2; i++)
                {
                    cout << "\nIngrese el elemento " << (i + 1) << " de conjunto2: ";
                    getline(cin, conjunto2[i]); // Almacena el valor ingresado por el usuario
                }
                break;
            }

        } while (numero != 3);
    }
}

// Muestra los elementos de dos conjuntos.
void mostrar_conjuntos(vector<string> &conjunto1, vector<string> &conjunto2)
{
    /**
     * Muestra los elementos de dos conjuntos.
     *
     * - conjunto1: Vector que contiene los elementos del primer conjunto.
     * - conjunto2: Vector que contiene los elementos del segundo conjunto.
     */

    // Verifica si el conjunto 1 no está vacío
    if (!conjunto1.empty())
    {
        cout << "\nConjunto 1: ";
        // Itera sobre cada elemento del conjunto 1
        for (const auto &elemento : conjunto1)
        {
            cout << "[" << elemento << "] "; // Imprime el elemento del conjunto 1
        }
    }
    else
    {
        cout << "\nConjunto 1 no está inicializado o está vacío."; // Mensaje si el conjunto 1 está vacío
    }

    // Verifica si el conjunto 2 no está vacío
    if (!conjunto2.empty())
    {
        cout << "\nConjunto 2: ";
        // Itera sobre cada elemento del conjunto 2
        for (const auto &elemento : conjunto2)
        {
            cout << "[" << elemento << "] "; // Imprime el elemento del conjunto 2
        }
    }
    else
    {
        cout << "\nConjunto 2 no está inicializado o está vacío."; // Mensaje si el conjunto 2 está vacío
    }
}

void operaciones_de_conjuntos(int &numero, int &menu_de_operaciones_de_conjuntos)
{
    /* parametros que se usaron y tener en cuenta.
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    1) empty = ayuda a verificar si hay  elementos en el vector y evitar errores de acceso a memoria no asignada.
    2) insert = ayuda a ingresar  un elemento al final del vector de string.
    3) end =  devuelve el iterador que apunta al final del vector de string.
    4) begin =  devuelve el iterador que apunta al principio del vector de string.
    5) push_back = agrega un  elemento al final del vector de string.
    6) sort =  ordena los elementos en base a su valor numerico o en orden alfabetico.
    7) cost auto& =  permite utilizar la variable sin tener que pasarsela como parametro.
    8) find = busca si existe un elemento dentro del vector y lo devuelve.
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    */

    switch (menu_de_operaciones_de_conjuntos)
    {
    case 0:
        do
        {
            // Muestra el menú de operaciones de conjuntos
            cout << "\n==================================================";
            cout << "\nOperaciones de Conjuntos.";
            cout << "\n1-Union de los conjuntos.";
            cout << "\n2-Interseccion de los conjuntos.";
            cout << "\n3-Diferencia entre los conjuntos.";
            cout << "\n4-Complemento entre los conjuntos.";
            cout << "\n5-Salir del menu.";
            cout << "\n==================================================";
            cout << "\nIngrese la opcion que quieras realizar: ";
            while (!(cin >> numero))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n==================================================";
                cout << "\nOperaciones de Conjuntos.";
                cout << "\n1-Union de los conjuntos.";
                cout << "\n2-Interseccion de los conjuntos.";
                cout << "\n3-Diferencia entre los conjuntos.";
                cout << "\n4-Diferencia entre los conjuntos.";
                cout << "\n5-Salir del menu.";
                cout << "\n==================================================";
                cout << "\nIngrese la opcion que quieras realizar: ";
            }

            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            switch (numero)
            {
            case 1:
                if (!conjunto1.empty() && !conjunto2.empty())
                {
                    // Declara un vector para la unión de conjuntos
                    vector<string> unionConjuntos;

                    // Combina los elementos de ambos conjuntos en el vector de unión
                    unionConjuntos.insert(unionConjuntos.end(), conjunto1.begin(), conjunto1.end());
                    unionConjuntos.insert(unionConjuntos.end(), conjunto2.begin(), conjunto2.end());

                    // Ordena y elimina duplicados en el vector de unión
                    sort(unionConjuntos.begin(), unionConjuntos.end());
                    unionConjuntos.erase(unique(unionConjuntos.begin(), unionConjuntos.end()), unionConjuntos.end());

                    // Mostramos los conjuntos que se usaron.
                    cout << "\n==================================================";
                    cout << "\nLos conjuntos  combinados son: ";
                    mostrar_conjuntos(conjunto1, conjunto2);
                    cout << "\n==================================================";
                    // Muestra la unión de conjuntos
                    cout << "\nUnion de los conjuntos: ";
                    for (const auto &elemento : unionConjuntos)
                    {
                        cout << "[" << elemento << "] ";
                    }
                }
                else
                {
                    cout << "\nNo se pueden realizar operaciones con conjuntos vacíos.";
                }
                break;

                //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            case 2:
                if (!conjunto1.empty() && !conjunto2.empty()) //  Si no estan vacios, continua
                {
                    // Declara un vector para la intersección de conjuntos
                    vector<string> interseccion;

                    // Encuentra los elementos comunes entre ambos conjuntos
                    for (const auto &elemento1 : conjunto1)
                    {
                        for (const auto &elemento2 : conjunto2)
                        {
                            if (elemento1 == elemento2)
                            {
                                interseccion.push_back(elemento1);
                                break; // Salir del bucle interno para evitar duplicados
                            }
                        }
                    }

                    // Mosramos los conjuntos que usaremos.
                    cout << "\n==================================================";
                    cout << "\nLos conjuntos  combinados son: ";
                    mostrar_conjuntos(conjunto1, conjunto2);
                    cout << "\n==================================================";
                    // Muestra la intersección de conjuntos
                    cout << "\nInterseccion de los conjuntos: ";
                    for (const auto &elemento : interseccion)
                    {
                        cout << "[" << elemento << "] ";
                    }
                }
                else
                {
                    cout << "\nNo se pueden realizar operaciones con conjuntos vacíos.";
                }
                break;

                //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            case 3:
                if (!conjunto1.empty() && !conjunto2.empty())
                {
                    // Declara un vector para la diferencia de conjuntos
                    vector<string> diferencia;

                    // Encuentra los elementos que están en conjunto1 pero no en conjunto2
                    for (const auto &elemento1 : conjunto1)
                    {
                        if (find(conjunto2.begin(), conjunto2.end(), elemento1) == conjunto2.end())
                        {
                            diferencia.push_back(elemento1);
                        }
                    }

                    // Mosramos los conjuntos que usaremos.
                    cout << "\n==================================================";
                    cout << "\nLos conjuntos  combinados son: ";
                    mostrar_conjuntos(conjunto1, conjunto2);
                    cout << "\n==================================================";
                    // Muestra la diferencia de conjuntos
                    cout << "\nDiferencia de los conjuntos: ";
                    for (const auto &elemento : diferencia)
                    {
                        cout << "[" << elemento << "] ";
                    }
                }
                else
                {
                    cout << "\nNo se pueden realizar operaciones con conjuntos vacíos.";
                }
                break;

                //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            case 4:

                int conjuntoAElegir;
                if (!conjunto1.empty() && !conjunto2.empty()) // El empty para verificar si no esta vacio el conjunto
                {
                    // Declara un vector para el complemento
                    vector<string> complemento;
                    cout << "\nIngrese el numero del conjunto que desea complementar (1 o 2): ";
                    cin >> conjuntoAElegir;

                    if (conjuntoAElegir == 1) // Opcciones para elgeir una de los dos conjuntos.
                    {
                        // Encuentra los elementos que están en conjunto2 pero no en conjunto1
                        for (const auto &elemento2 : conjunto2)
                        {
                            if (find(conjunto1.begin(), conjunto1.end(), elemento2) == conjunto1.end())
                            {
                                complemento.push_back(elemento2);
                            }
                        }

                        // Mosramos los conjuntos que usaremos.
                        cout << "\n==================================================";
                        cout << "\nLos conjuntos  combinados son: ";
                        mostrar_conjuntos(conjunto1, conjunto2);
                        cout << "\n==================================================";
                        cout << "\nComplemento de conjunto1: ";
                    }
                    else if (conjuntoAElegir == 2)
                    {
                        // Encuentra los elementos que están en conjunto1 pero no en conjunto2
                        for (const auto &elemento1 : conjunto1)
                        {
                            if (find(conjunto2.begin(), conjunto2.end(), elemento1) == conjunto2.end())
                            {
                                complemento.push_back(elemento1);
                            }
                        }

                        // Mosramos los conjuntos que usaremos.
                        cout << "\n==================================================";
                        cout << "\nLos conjuntos  combinados son: ";
                        mostrar_conjuntos(conjunto1, conjunto2);
                        cout << "\n==================================================";
                        cout << "\nComplemento de conjunto2: ";
                    }
                    else
                    {
                        cout << "\nEntrada invalida. Por favor, ingrese 1 o 2.";
                        return;
                    }

                    // Muestra el complemento de conjuntos
                    for (const auto &elemento : complemento)
                    {
                        cout << "[" << elemento << "] ";
                    }
                }
                else
                {
                    cout << "\nNo se pueden realizar operaciones con conjuntos vacíos.";
                }
            }
        } while (numero != 5);
    }
}

// Borra o edita elementos de un conjunto.
void borrar_y_editar_conjunto(vector<string> &conjunto)
{
    /**
     * Borra o edita elementos de un conjunto.
     *
     * - conjunto: Vector que contiene los elementos del conjunto a borrar o editar.
     */

    // Verifica si el conjunto está vacío
    if (conjunto.empty())
    {
        cout << "El conjunto está vacío. No hay elementos para borrar o editar." << endl;
        return;
    }

    // Muestra los elementos actuales del conjunto
    cout << "El conjunto actual es: ";
    for (const auto &elemento : conjunto)
    {
        cout << "[" << elemento << "] ";
    }

    int opcion;
    // Muestra el menú de opciones
    cout << "\n==================================================";
    cout << "\nSeleccione una opción.";
    cout << "\n1. Borrar elemento";
    cout << "\n2. Editar elemento";
    cout << "\n3. Volver al menú principal";
    cout << "\n==================================================";
    cout << "\nIngrese la opción: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
        string elemento_a_borrar;
        cout << "Ingrese el elemento que desea borrar: ";
        cin.ignore();
        getline(cin, elemento_a_borrar);

        // Busca el elemento a borrar en el conjunto
        auto it = find(conjunto.begin(), conjunto.end(), elemento_a_borrar);
        if (it != conjunto.end())
        {
            // Borra el elemento si se encuentra
            conjunto.erase(it);
            cout << "\n==================================================";
            cout << "\nElemento borrado exitosamente." << endl;
        }
        else
        {
            cout << "\n==================================================";
            cout << "\nEl elemento no se encontró en el conjunto." << endl;
        }
        break;
    }
    case 2:
    {
        string elemento_a_editar, nuevo_valor;
        cout << "\nIngrese el elemento que desea editar: ";
        cin.ignore();
        getline(cin, elemento_a_editar);

        // Busca el elemento a editar en el conjunto
        auto it = find(conjunto.begin(), conjunto.end(), elemento_a_editar);
        if (it != conjunto.end())
        {
            cout << "\n==================================================";
            cout << "\nIngrese el nuevo valor para el elemento: ";
            getline(cin, nuevo_valor);
            *it = nuevo_valor; // Reemplaza el valor del elemento
            cout << "\n==================================================";
            cout << "\nElemento editado exitosamente." << endl;
        }
        else
        {
            cout << "\n==================================================";
            cout << "\nEl elemento no se encontró en el conjunto." << endl;
        }
        break;
    }
    case 3:
        // No hacer nada, simplemente regresar al menú principal
        break;
    default:
        cout << "\n==================================================";
        cout << "\nOpción inválida. Por favor, seleccione una opción válida." << endl;
    }
}

// Borra o edita valores de uno de los dos conjuntos.
void borrar_y_editar_valores(vector<string> &conjunto1, vector<string> &conjunto2)
{
    /**
     * Borra o edita valores de uno de los dos conjuntos.
     *
     * - conjunto1: Vector que contiene los elementos del primer conjunto.
     * - conjunto2: Vector que contiene los elementos del segundo conjunto.
     */

    int conjunto_a_editar;
    // Solicita al usuario que seleccione el conjunto a editar
    cout << "\n==================================================";
    cout << "\nSeleccione el conjunto a editar (1 o 2): ";
    cin >> conjunto_a_editar;

    switch (conjunto_a_editar)
    {
    case 1:
        cout << "\n==================================================";
        cout << "\nEditando conjunto 1." << endl;
        cout << "\n==================================================\n";
        // Llama a la función para editar el primer conjunto
        borrar_y_editar_conjunto(conjunto1);
        break;
    case 2:
        cout << "\n==================================================";
        cout << "\nEditando conjunto 2." << endl;
        cout << "\n==================================================\n";
        // Llama a la función para editar el segundo conjunto
        borrar_y_editar_conjunto(conjunto2);
        break;
    default:
        cout << "\n==================================================";
        cout << "\nSelección inválida. Por favor, seleccione 1 o 2." << endl;
    }
}

// Vacía uno o ambos conjuntos de acuerdo a la opción seleccionada por el usuario.
void vaciado_de_conjuntos()
{
    int opciones;
    do
    {
        cout << "\n==================================================";
        cout << "\nMenu de vaciado de conjuntos.";
        cout << "\n1- Vaciar Conjunto 1.";
        cout << "\n2- Vaciar Conjunto 2.";
        cout << "\n3- Vaciar ambos conjuntos.";
        cout << "\n4- Salir al menu principal.";
        cout << "\n==================================================";
        cout << "\nIngresa la opcion: ";
        // Solicita al usuario que ingrese una opción válida
        while (!(cin >> opciones))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nError! Ingresa una opcion valida." << endl;
            cout << "\n==================================================";
            cout << "\nIngrese la opcion nuevamente: ";
        }

        switch (opciones)
        {
        case 1:
            conjunto1.clear(); // Vacía el primer conjunto
            cout << "\nPrimer conjunto vaciado.";
            break;

        case 2:
            conjunto2.clear(); // Vacía el segundo conjunto
            cout << "\nSegundo conjunto vaciado.";
            break;

        case 3:
            conjunto1.clear(); // Vacía el primer conjunto
            conjunto2.clear(); // Vacía el segundo conjunto
            cout << "\nAmbos conjuntos vaciados.";
            break;

        case 4:
            cout << "\nRegresando al menu principal.";
            break;

        default:
            cout << "\nOpcion invalida. Por favor, ingresa una opcion valida.";
        }
    } while (opciones != 4); // Repite el menú hasta que se seleccione la opción para salir
}

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
