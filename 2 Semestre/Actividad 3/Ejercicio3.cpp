/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 31/01/2024
 * Programa: Ejercicio3.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: Un programa en donde se le pida un número al usuario
 *************************************/

#include <iostream> // Libreria para el manejo de la entrada y salida estandar.
using namespace std; //  Uso del espacio de nombres STD.


int numero; //  Declaracion e inicializacion de variable entera llamada "numero".
char opcion;//  Variable char que guardara la respuesta del usuario, si quiere seguir o no.
int contador = 0;//  Contador para saber cuantas veces ha sido llamado el bucle while.

//  Funcion principal main(), punto de inicio del programa.
int main()
{
    do //   Estructura repetitiva do-while, que permite ejecutar una sentencia
    {
        //   Sentencias a realizar dentro del bucle.
        cout << "Ingrese el Numero: ";
        cin >> numero; //  Leemos el valor numerico que nos proporciona el usuario.
        if (numero > 0 && numero <= 500) //   Condicion para validar los valores permitidos.
        {
            for (int i = 5; i <= 500; i+=5)//    Incremento de i en 5 cada vez mas.
            {
                cout << i << endl;//   Imprimimos el resultado.
                contador++; //   Sumamos uno a nuestro contador.
            }
            cout << "Desea continuar? s/n: "; //   Pregunta al usuario si desea seguir.
            cin >> opcion; 
        }
        else if (numero > 500 && numero <= 1000) //    Si el numero es mayor a 500 pero menor o igual a 100
        {
            for (int i = 510; i <= 1000; i += 10) //    Incremento de i en 10 cada vez mas.
            {
                cout << i << endl;
                contador++; //    Sumamos uno a nuestro contador.
            }
            cout << "Desea continuar? s/n: ";//    Preguntamos nuevamente al usuario.
            cin >> opcion;
        }
        else if (numero > 1000)//     Si el numero es mayor a 1000, mostramos mensaje de error
        {
            cout << "No se puede calcular el valor" << endl;
        }

    } while (opcion != 'n');//    La estructura do-while se repite mientras opcion sea distinta de 'n'.
    cout << "Se han imprimidos los numeros en intervalo de 5 y 10: " << contador << endl; //  Mostramos el total de numeros impresos.
}//  Fin de la funcion principal main().
