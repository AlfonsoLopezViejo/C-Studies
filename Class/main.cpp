// Class.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

//A class defines a data structure to store all the data you need 
class Dog
{
    private:
        //Member variable
        char m_name; 
        //Member variable
        char m_race; 

    public: 
        //Member funtion. Describe an action that the objects of this class can perform
        void Bark()
        {
            std::cout << "Woof Woof"; 
        }
};

//Inheritance: classes can inherit from others to inherit his variables and methods. In c++ we can have control of what the classes inherit 

class Parent
{
private:
    int aPrivateVariable; 
protected:
    int aProtectedVariable;
public: 
    int aPublicVariable;
};

class PrivateChild : private Parent 
{
    //Not necesary to especify its private because all members of a class are private by default but, its more readable for other programmers and for me in the future
private: 
    void AccessParentMembers()
    {
        aProtectedVariable = 1; 
    }
};

class ProtectedChild : protected Parent
{
    void AccessParentMembers()
    {
        aProtectedVariable = 1;
        
    }
}; 

class PublicChild : public Parent
{
public: 
    int childvar;
};



int main()
{
    PrivateChild   privChild;
    ProtectedChild protChild; 
    PublicChild    puChild; 

    

    std::cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
