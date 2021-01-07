// Basics.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


//Variables are divided in two types: integral types and floating-point types 
//Variable types and their minimun bits representation 
//Always important to remember 1 byte = 8 bits = 2e3 -> example of 1 byte -> 10101001 -> 8 bits. Never a bad thing to rememeber the basics  
//2e4 = 16 2e5  

bool boolen; // None 
char character; // 8bits = 1 byte
wchar_t w_character; //16 bits = 2 bytes
char16_t unicode_character; //For unicode only -> 16 bits = 2 bytes
char32_t unicode_character; //For unicode only -> 32 bits = 3 bytes
short short_int; //16 bits = 2 byte
int integer; //16 bits = 2 byte 
long l_int;  //32 bits = 3 byte
long long big; //64bits = 4 byte
float f; //6 significant digits -> normally 4 bytes = 32 bits
double; //10 significant digits -> normally 8 bytes = 64 bits
long double l_d; // 10 significant digits



//Unsigned lets us store more values in the positive scale, but we cant introduce negative values to this variables

//Some rules of thumb when deciding when to use one variable or another 
//1. If you KNOW the value is going to be a positive number, use unsigned notation
//2. Dont use char or bool for aritmetic expresions. If I need a tiny integer -> especify it with signed/unsigned because in some machines 
//a char could be signed or unsigned by default
//3. Double > float for floating-point values. Its more precise and the computation diference is minimum
    

int main()
{
    std::cout << " ------------ VARIABLES ---------\n";




    std::cout << std::endl; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
