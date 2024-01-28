/***********Presentacion.***********
 * Nombre: Angel ALexis Serrano Hernandez.
 * Fecha: 24/01/2024
 * Programa: Activodad1.cpp
 * CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSDAD DE GUADALAJARA.
 * INGENIERIA EN COMPUTACION / 2DO SEMESTRE.
 * Profesor: Carlos Javier Cruz Franco.
 * Descripccion: EL archivo mostrara en pantalla los datos del usuario.
*************************************/

//Incluimos la liberia para que pueda leer lo que se le vaya a pedir.
#include <iostream>
 //Declarar variables y asignarles valores.
 //El std::string, lograra captar la escritura.
std::string nombre;
std::string edad;
std::string residencia;
std::string fecha;
std::string carrera;
std::string semestre;

int main(){
    //Pedimos los datos.
    std::cout << "Ingrese su nombre: ";
    getline(std::cin,nombre); //Getline sirve para poder agarrar el texto completo con espacios y guardarlo.
    std::cout << "Ingrese su Edad: ";
    getline(std::cin, edad);
    std::cout << "Ingrese su Residencia: ";
    getline(std::cin,residencia);
    std::cout << "Ingrese su fecha de nacimiento (Dia/Mes/Año): ";
    getline(std::cin,fecha);
    std::cout << "Igresa su Carrera: ";
    getline(std::cin,carrera);
    std::cout << "Ingrese su Semestre: ";
    std::cin >> semestre;

    //Mostramos la informacion al usuario.
    std::cout<<"\n============================================";
    std::cout<<"\nSe le mostrara los datos que haz rellenado";
    std::cout<<"\n============================================";
    std::cout<<"\n\nNombre: "<<nombre;
    std::cout<<"\nEdad: "<<edad;
    std::cout<<"\nVives en: "<<residencia;
    std::cout<<"\nFecha de Nacimiento: "<<fecha;
    std::cout<<"\nCursas la Carrera en: "<<carrera<<".";
    std::cout<<"\nEstas en el semestre:  "<<semestre<<"\n";

    //Fin del programa.
}