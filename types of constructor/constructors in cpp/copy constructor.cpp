#include <bits/stdc++.h>
using namespace std;

class Myclass
{
private:
    int data;

public:
    // default constructor
    Myclass() : data(0)
    {
        cout << "Default constructor called" << endl;
    }

    // parameterized constructor
    Myclass(int val) : data(val)
    {
        cout << "Parameterized constructor called" << endl;
    }

    // copy constructor
    Myclass(const Myclass &other) : data(other.data)
    {
        cout << "Copy constructor called" << endl;
    }

    void display()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    // creating an object using parameterized constructor
    Myclass obj1(42);
    cout << "Object 1: ";
    obj1.display();
    cout << endl;

    // creating an object using the copy constructor
    Myclass obj2 = obj1;
    cout << "Object 2: ";
    obj2.display();
    cout << endl;
    return 0;
}