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
int num[50] = {0};
int pos, valor;
int inmenu;
int opcion;
int caso4;
int caso5;
int suma = 0;

int main() //  Inicio del programa principal.
{
    do //  Comienzo de un bucle que se repite hasta que se cumpla una condicion
    {
        switch (inmenu) //  Se utiliza para realizar diferentes acciones segun la opcion elegida por el usuario
        {
        case 0: //  Opción para agregar numeros a la lista.

            MenuPrincipal();
            while (!(cin >> opcion)) //  Verificamos si es numero lo que ingreso el usuario.
            {
                cin.clear();                                         //  Vacía el buffer de entrada.
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  Limpiando buffer.
                cout << "Valor invalido.";
                MenuPrincipal();
            }
        }

        switch (opcion) //   Condicionales anidados o Case.
        {
        case 1: //  Agregar un numero a la lista.

            Agregar_Digitos(num);

            break;

        case 2: //   Muestra los datos de la lista.
            cout << "\n==================================================";
            cout << "\nLa lista es: ";
            for (int i = 0; i < 10; i++) //    Recorre las posiciones de la lista.
            {
                if (num[i] != 0) //    Verifica si no ha sido borrada esa posicion.
                {
                    cout << "[" << num[i] << "]"; //    Imprime los numeros separados por comas.
                }
                else
                {
                    cout << "[Null]"; //     Si fue borrada muestra Null.
                }
            }

            cout << "\n==================================================";
            cout << "\nVolver al menu.\n";
            cout << "(0)-No.\n";
            cout << "\n==================================================";
            cout << "\nIngrese el numero del (0):";
            while (!(cin >> inmenu) || inmenu != 0) //  Comprueba que sea un valor valido para volver al menu.
            {
                cin.clear();                                         //  Limpia el buffer en caso de error.
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  Limpia el buffer en caso de error.
                cout << "Valor invalido. ";
                cout << "\n==================================================";
                cout << "\nVolver al menu.\n";
                cout << "(0)-No.\n";
                cout << "\n==================================================";
                cout << "\nIngrese el numero del (0):";
            }
            break;

        case 3: //    Borra una posicion especificada por el usuario.

            cout << "\n==================================================";
            cout << "\nSumando los elementos de la lista: ";
            suma = 0;                    //  Inicializa a cero para poder ir sumando./ por lo tanto se reinicia el valor cuando vuelves a seleccionar el caso de la suma.
            for (int i = 0; i < 10; i++) //    Suma todos los elemntos de la lista.
            {
                suma += num[i]; //       Asigna a suma el valor del elemento actual.
            }
            cout << suma;

            cout << "\n==================================================";
            cout << "\nVolver al menu.\n";
            cout << "(0)-No.\n";
            cout << "\n==================================================";
            cout << "\nIngrese el numero del (0):";
            while (!(cin >> inmenu) || inmenu != 0) //    Verifica que sea un entero y no otro tipo de dato.
            {
                cin.clear();                                         //       Limpia el buffer si hubiera algo mal escrito.
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer si no es un entero.
                cout << "Valor invalido. ";

                cout << "\n==================================================";
                cout << "\nVolver al menu.\n";
                cout << "(0)-No.\n";
                cout << "\n==================================================";
                cout << "\nIngrese el numero del (0):";
            }
            break;
        case 4: //  Borrar elemento o editar.
            cout << "\n==================================================\n";
            cout << "Borrar elemento o Editar elemento.\n";
            cout << "1 - Ingrese la posicion para borrar elemento de la lista: \n";
            cout << "2 - Ingrese la posicion que quieras editar de la lista: \n";
            cout << "\n==================================================\nIngrese una Opcion del Menu [1-2]: ";
            cin >> caso4;
            if (caso4 >= 1 && caso4 < 3) // Verifica si la posicion esta dentro del rango permitido.
            {
                switch (caso4) //    Segun la opcion que eliga el usuario, realiza las operaciones correspondientes
                {
                case 1: //    Eliminar un elemento de la lista.
                    cout << "Ingrese la posicion a eliminar: ";
                    cin >> pos;
                    if (pos >= 0 && pos <= 9) //    Verifica si la posicion esta dentro del rango permitido.
                    {
                        num[pos] = 0;                                                       //   Asigna 0 a la posicion que se qui
                        cout << "Elemento en la posicion " << pos << " ha sido borrado.\n"; //  Mostramos mensaje de confirmacion.
                        break;
                    }
                    else //  Si no esta dentro del rango permitido.
                    {
                        cout << "Error, posicion incorrecta.\n";
                        cout << "\n==================================================";
                        cout << "\nVolver al menu.\n";
                        cout << "(0)-No.\n";
                        cout << "\n==================================================";
                        cout << "\nIngrese el numero del (0):";
                        while (!(cin >> inmenu) || inmenu != 0) //     Verifica que sea un entero y no otro tipo de dato.
                        {
                            cin.clear();                                         //  Limpia el buffer en caso de haber datos invalidos.
                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //  Limpia el buffer hasta encontrar un carácter valido.
                            cout << "Valor invalido.";
                            cout << "Error, posicion incorrecta.\n";
                            cout << "\n==================================================";
                            cout << "\nVolver al menu.\n";
                            cout << "(0)-No.\n";
                            cout << "\n==================================================";
                            cout << "\nIngrese el numero del (0):";
                        }
                        break;
                    }

                    break;
                case 2: //     Modificar un elemento de la lista.
                    cout << "Ingrese la posicion para editar: ";
                    cin >> pos;
                    cout << "Ingrese el nuevo numero: ";
                    cin >> valor;

                    if (pos >= 0 && pos < 10) // Verifica si la posicion esta dentro del rango permitido.
                    {
                        num[pos] = valor;                                                                     // Asigna el nuevo valor a la posicion indicada por el usuario.
                        cout << "Elemento en la posicion " << pos << " ha sido editado a: " << valor << "\n"; //  Muestra el mensaje con los nuevos valores.
                    }
                    else //  Si no esta dentro del rango permitido.
                    {
                        cout << "Posicion invalida.\n";
                    }
                }
                break;
            }
            else //  Si no esta dentro del rango permitido.
            {
                cout << "Valor invalido.\n";
            }

            if (pos >= 0 && pos < 10) // Verifica si la posicion esta dentro del rango permitido.
            {
                num[pos] = valor;                                                                     // Asigna el nuevo valor a la posicion indicada por el usuario.
                cout << "Elemento en la posicion " << pos << " ha sido editado a: " << valor << "\n"; //  Muestra el mensaje con los nuevos valores.
            }
            else //  Si no esta dentro del rango permitido.
            {
                cout << "Posicion invalida.\n";
            }

            break;

        case 5: // Borrar Arreglo de la lista
            cout << "\n==================================================\n";
            cout << "Desea borra el arreglo?.\n";
            cout << "1 - Si \n";
            cout << "2 - No \n";
            cout << "\n==================================================\nIngrese una Opcion del Menu [1-2]: ";
            cin >> caso5;

            if (caso5 >= 1 && caso5 < 3) // Verifica si la posicion esta dentro del rango permitido.
            {
                switch (caso5) //  Segun la opcion elegida por el usuario, realiza una accion u otra.
                {
                case 1:                          //  Elimina todos los elementos de la lista.
                    for (int i = 0; i < 10; ++i) //  Inicializacion y asignacion de valores.
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
    } while (opcion != 6);
}