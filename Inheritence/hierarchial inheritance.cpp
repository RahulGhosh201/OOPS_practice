#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

// Derived class1
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

// Derived class2
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing" << endl;
    }
};

int main()
{
    // creating object of Derived classes
    Dog myDog;
    Cat myCat;

    // Accessing inherited functions
    myDog.bark();
    myDog.eat();

    myCat.eat();
    myCat.meow();

    return 0;
}
