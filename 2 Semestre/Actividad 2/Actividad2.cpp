/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 24/01/2024
 * Programa: Activodad1.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: EL archivo mostrara en pantalla los datos del usuario.
*************************************/

#include <iostream> // Se  importa la libreria de entrada y salida
using namespace std; // Se usa el namespace para no poner std

int main() //  Función principal del programa
{
    int opcion;
    do
    {
        cout << "\n============================================\n";
        cout << "Caracteres de escape y Cadena de control de tipos de Salidas\n";
        cout << "============================================\n";
        cout << "1-Caracteres de escape\n";
        cout << "2-Cadena de control de tipos de Salida\n";
        cout << "3-Salir\n";
        cout << "============================================\n";
        cout << "Elija una opción: ";
        cin >> opcion;
        cout << "\n============================================\n";

        if (opcion == 1) // Hacemos un if  para que si la opción es 1, entre a este bloque de código y asi hasta el 3
        {
            // Secuencia de escape para un carácter de retroceso
            cout << "Hola\b Mundo\n";

            // Secuencia de escape para un avance de página
            cout << "Primera línea\fSegunda línea\n";

            // Secuencia de escape para una nueva línea
            cout << "Primera línea\nSegunda línea\n";

            // Secuencia de escape para un retorno de carro
            cout << "Primera parte\rSegunda parte\n";

            // Secuencia de escape para un tabulador
            cout << "Primera columna\tSegunda columna\n";

            // Secuencia de escape para una tabulación vertical
            cout << "Primera fila\vSegunda fila\n";

            // Salir al menu de nuevo
            cout << "Presione enter para continuar al menu...";
            cin.ignore();
            getchar();
        }
        else if (opcion == 2)
        {
            // Cadena de control para un entero
            int numero = 5;
            printf("\nUn número entero: %d\n", numero);

            // Cadena de control para un entero en base 8
            printf("Un número en base 8: %o\n", numero);

            // Cadena de control para un entero en base 16
            printf("Un número en base 16: %x\n", numero);

            // Cadena de control para un entero sin signo
            unsigned int positivo = 5;
            printf("Un número sin signo: %u\n", positivo);

            // Cadena de control para un carácter
            char letra = 'A';
            printf("Una letra: %c\n", letra);

            // Cadena de control para una cadena de caracteres
            const char *palabra = "Hola mundo";
            printf("Una frase: %s\n", palabra);

            cout << "Presione enter para continuar al menu...";
            cin.ignore();
            getchar();
        }
        // Al darle 3  a la opción, se sale del bucle while y termina el programa
        else if (opcion == 3)
        {
            cout << "\n============================================\n";
            cout << "Saliendo del programa.\n";
            cout << "\n============================================\n";
        }
        else
        {
            //  Si no es ninguna de las anteriores, muestra este mensaje 
            cout << "\n============================================\n";
            cout << "Opción inválida. Por favor, elija una opción entre 1 y 3.\n";
            cout << "\n============================================\n";
        }
    } while (opcion != 3); //  El bucle while continúa mientras que opción sea distinta de 3

}
