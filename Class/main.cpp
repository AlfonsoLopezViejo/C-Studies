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

//Protected and public members of the parent class become private memeber of the child class. In this case aProtectedVarible and apublicVariable are 
//memebers of a PrivateChild but cant be accesed from outside or the would be inherited from another child class of PrivateChild. See example below
class PrivateChild : private Parent 
{
    //Not necesary to especify its private because all members of a class are private by default but, its more readable for other programmers and for me in the future
private: 
    void AccessParentMembers()
    {
        aProtectedVariable = 1; 
    }
};

class AChildFromPrivate : public PrivateChild
{
private: 
    void AccessParentMembers()
    {
        //Cant acess aProtectedVariable or aPublicVariable
    }

};

//Now the public and private members of parent become protected memebers of Protected Child
class ProtectedChild : protected Parent
{
    void AccessParentMembers()
    {
        aProtectedVariable = 1;
        
    }
}; 

class AChildFromProtected : public ProtectedChild
{
    void AccessParentMembers()
    {
        //As you can see, no compiler errors
        aProtectedVariable = 1;
        aPublicVariable = 1; 
    }
};

//Public inheritance is the most intuitive. Now protected members become protected members of the child class and public members become public memebrs 
//of the child class. Everything keeps its protection level as the parent defined. 
class PublicChild : public Parent
{

};






int main()
{
    PrivateChild   privChild;
    ProtectedChild protChild; 
    PublicChild    puChild; 

    puChild.aPublicVariable; 

    std::cout << "Hello World!\n";
}
