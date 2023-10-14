#include <bits/stdc++.h>
using namespace std;

class Myclass
{
private:
    int data;

public:
    // parameterized constructor
    Myclass(int val) : data(val)
    {
        cout << "Inside parameterized constructor" << endl;
    }

    // copy assignment operator
    Myclass &operator=(const Myclass &other)
    {
        if (this != &other)
        {                      // check for self assignment
            data = other.data; // copy data from 'other' object to this object
        }

        return *this;
    }

    // Member function to display data
    void display()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    // creating objects
    Myclass obj1(10);
    Myclass obj2(20);

    // Display initial values
    cout << "Object 1: " << endl;
    obj1.display();
    cout << "Object 2: " << endl;
    obj2.display();

    // copy assignment
    obj1 = obj2;

    // Display updated values after copy assignment
    cout << "After copy assignment" << endl;
    cout << "Object 1: " << endl;
    obj1.display();
    cout << "Object 2: " << endl;
    obj2.display();

    return 0;
}