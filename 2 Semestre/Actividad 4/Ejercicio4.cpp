/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 31/01/2024
 * Programa: Ejercicio3.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: Elaborar una serie fibonancci
 *************************************/

#include <iostream> // Libreria de entrada y salida estandard.
using namespace std; //  Uso del espacio de nombre STD.
// Renombramos las variables
int opcion;
int opcionmenu = 0;
int numero;

int main() //  Funcion principal.
{
    do //  Iniciamos un bucle do while para que el programa siga ejecutandose siempre y cuando el usuario no coloque 4
    {
        switch (opcionmenu) //  Declaramos el menu con un case para cada opcion.
        {
        case 0: // Hacemos un menu con el caso 0 para que el usuario pueda volver al menu
            
            //  Mostramos los mensajes del menu.
            cout << "\n==================================================\n";
            cout << "Menu de Ciclos (For, While y Do-While)\n";
            cout << "1 - Ingresar al Ciclo For.\n";
            cout << "2 - Ingresar al Ciclo While.\n";
            cout << "3 - Ingresar al Ciclo Do-While.\n";
            cout << "4 - Salir del programa.\n==================================================\nIngrese su Opcion: ";
            cin >> opcion;
        }

        int a = 0, b = 1, c; //  Variables para la serie de Fibonacci.

        switch (opcion) //   Segundo menu para elegir entre for while o do while.
        {

        case 1: //   Opcion 1 es ingresar al ciclo For.

            //  Mostramos los mensajes del submenu.
            cout << "\n==================================================";
            cout << "\nIngresaste al Ciclo For.\n";
            cout << "Ingrese el numero:";
            cin >> numero;
            cout << "\nLa serie Fibonacci es: ";
            for (int i = 0; a <= numero; i++) //   La condicion debe ser <= en lugar de < para mostrar todos los numeros.
            {
                cout << "{" << a << "}"; //  Imprimimos el primer valor.
                c = a + b; //   Calculamos el siguiente valor de la serie.
                a = b; //    Actualizamos el valor anterior.
                b = c; //     Actualizamos el valor actual.
            } //  Termina el bloque de definicion de variable local. 
            //   La variable c se destruye cuando termina su bloque de definicion.
            cout << "\n==================================================";
            cout << "\nDesea continuar o regresar al menu?\n"; //   Preguntamos si desean seguir adelante.
            cout << "(1)-Continuar./(0)-Regresar.\n";
            cout << "Ingrese el numero:";
            cin >> opcionmenu; 
            break; //  Finaliza el case 1 para no entrar en lo demas.

        case 2: //    Opcion 2 es ingresar al ciclo While.

            //   Mostramos los mensajes del submenu.
            cout << "\n==================================================";
            cout << "\nIngresaste al Ciclo For.\n";
            cout << "Ingrese el numero:";
            cin >> numero;
            cout << "\nLa serie Fibonacci es: ";
            while (a <= numero) //    El while solo saldra mientras que sea menor o igual a numero.
            {
                cout << "{" << a << "}"; //   Imprimimos el valor actual.
                c = a + b; //     Calculamos el proximo valor de la serie.
                a = b;//       Asignamos el valor actual a el anterior.
                b = c;//         Asignamos el proximo valor a el actual.
            }
            cout << "\n==================================================";
            cout << "\nDesea continuar o regresar al menu?\n";//   Preguntamos si quieren seguir adelantando.
            cout << "(1)-Continuar./(0)-Regresar.\n";
            cout << "Ingrese el numero:";
            cin >> opcionmenu;
            break;//    Finaliza el case 2, por lo tanto salta a default y luego a break.

        case 3:// opcion 3 es ingresa al ciclo do-while

            //    Mostrando los mensaje del submenú.
            cout << "\n==================================================";
            cout << "\nIngresaste al Ciclo Do-While.\n";
            cout << "Ingrese el numero:";
            cin >> numero;
            cout << "\nLa serie Fibonacci es: ";

            do//    Inicia el bucle do-while.
            {
                cout << "{" << a << "}";//       Imprime el valor actual.
                c = a + b;//               Calcula el proximo valor de la serie.
                a = b;//                      Asigna el valor actual a el anterior.
                b = c;//                           Asigna el proximo valor a el actual.
            } while (a <= numero);//  Mientras que se cumpla esta condicion el bucle sigue ejecutandose.
            cout << "\n==================================================";
            cout << "\nDesea continuar o regresar al menu?\n";// Preguntamos si quieren seguir adelantando.
            cout << "(1)-Continuar./(0)-Regresar.\n";
            cout << "Ingrese el numero:";
            cin >> opcionmenu;
            break;// Finaliza el case 3, por lo tanto salta a default y luego a break.

            case 4://  Opción para salir del programa.
            break;// Finaliza el switch, por lo tanto sale del while y del main.
        }

    } while (opcion != 4);//  La condición del while es true siempre y cuando opción sea distinta de 4.
}//  Fin de Main.