#include <bits/stdc++.h>
using namespace std;

// Base class Animal
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived class Dog inheriting from base class Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

int main()
{
    Dog mydog;    // creating an object of the derived class
    mydog.eat();  // accessing the member function from the base class
    mydog.bark(); // accessing the member function from the derived class
    return 0;
}