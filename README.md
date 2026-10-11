# C-
Object Oriented Programming
//inheritance( class to class)

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    string colour;
    int age;
    int stamina;

    void Eat()
    {
        cout << "Eat" << endl;
    }

    void Run()
    {
        cout << "Animal is Running" << endl;
    }
};
class Bolod : public Animal
{
};

int main()
{
    Bolod B1;
    B1.Run();

    B1.Eat();

    return 0;
}
