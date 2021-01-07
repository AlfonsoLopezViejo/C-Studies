// Iostream.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <string>
#include <iostream>

int i = 12; 


int main()
{
    //" " String literal ' ' Character Literal
    //In this case we are using the string class so is a string literal + a null terminator(2 char array)
    std::string s_Literal { "Literal" };
    //Character literal
    char c_wow =  'wow'; 

    int a = 0;
    //Standard library for input and output 
    std::cout << "Give me a number"; 
    //Iostream is on the namespace std(Standard library). We use namespace to avoid conflicts with other libraries. For example if two math libraries have 
    //the class Vector, we can access them with the namespace containing it + the :: scope operator
    std::cin >> a; 
    if(a <= 0)
    {
        //Used for logging errors
        std::cerr << "This is an error log"; 
        //Used for logging things about the program  
        std::clog << "This is a normal log"; 
    }
    std::cout << a;
    //endl Flush the output buffer so its a good practica to put it at the end. 
    std::cout << std::endl; 

    int v1 = 2, v2 = 1;
    std::cout << "Give me a number";
    std::cin >> v1; 
    std::cout << "Give me a number";
    std::cin >> v2; 

    std::cout << "The sum of " << v1; 
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    std::cout << std::endl; 

    std::cout << "The multiplication " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 * v2 << std::endl;
    std::cout << std::endl;

    int sum = 0, value = 0; 
    //Cin gets arguments until the argument you give is erronius in this case giving him a letter. It will end if we enter and end of file to(ctrl + z) 
    while(std::cin >> value)
    {
        sum += value; 
    }

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
