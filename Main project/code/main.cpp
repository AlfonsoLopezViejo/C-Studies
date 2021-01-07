// C++Studies.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

//Auto is a good practice because makes the code more readable for other programmers 
int i; 

int AutoExample(int i)
{
    //More readable
    auto j = i + 1; 
    return j; 
}

//Ways of passing parameters
int PassByValue(int param) 
{
    std::cout << "Pass by value \n";
    param += 1; 
    return param;
};

int PassByReference(int &param)
{
    std::cout << "Pass by reference \n"; 
    param += 1; 
    return param; 
}

//Dangerous because 
//1. Some other thread can delete the memory adress to the pointer it is pointing. If this happens the pointer points to nullptr direction(nothing) and will 
//make a crash in the program. We can solve it with an if check but is less efficient if we could do it directly
//2. It can cause problems: memory allocated on the heap must be deleted before the program ends. So does our function free this memory? Is the user the one 
//who must do it? 
//
void PassByPointer(int* p)
{
    //Derefencing the pointer to see his type
    std::cout << "My value is " << *p << "\n"; 
}

class Whatever
{
    public: 
        Whatever(int num, const char* name) {};
};

class Recibe
{
public:
    Recibe(Whatever w) {};
    Recibe(Whatever& w) {}; 
}; 

int main()
{
    //Types of initializations
    Whatever parentesis(1, "Me"); 
    Whatever equal     = { 1, "Me" };
    Whatever brakets   { 1, "Me" };

    Recibe r = { {1, "Me"} }; 

    int a = 0; 
    std::cout << "Give me a number"; 
    std::cin >> a; 
    PassByValue(a);
    std::cout << a << "\n";
    PassByReference(a);
    std::cout << a << "\n";
    
    int* p = &a; 
    PassByPointer(p); 
    return 0; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
