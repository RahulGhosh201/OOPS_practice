#include <bits/stdc++.h>
using namespace std;

// base class
class Grandparent
{
public:
    void d1()
    {
        cout << "This is grandparent class" << endl;
    }
};

// derived class inheriting from grandparent
class Parent : public Grandparent
{
public:
    void d2()
    {
        cout << "This is Parent class" << endl;
    }
};

// derived class inheriting from Parent
class Child : public Parent
{
public:
    void d3()
    {
        cout << "This is Child class" << endl;
    }
};

int main()
{
    // Creating an object of Child class
    Child obj;

    obj.d1(); // Accessing Grandparent class
    obj.d2(); // Accessing Parent class
    obj.d3(); // Accessing Child class
    return 0;
}