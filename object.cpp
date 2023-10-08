#include <bits/stdc++.h>
using namespace std;

// 1. Using Default Constructor:
class Myclass1
{
public:
    int data;
    Myclass1()
    {
        data = 5;
    }
};

// 2. Using Parameterized Constructor:
class Myclass2
{
public:
    int data;
    Myclass2(int value)
    {
        data = value;
    }
};

// 3. Using Dynamic Memory Allocation (new keyword):
class Myclass3
{
public:
    int data;
};

// 4. Using Object Arrays:
class Myclass4
{
public:
    int data;
    Myclass4()
    {
        data = 10;
    }
};

// 5. Using Copy Constructor:
class Myclass5
{
public:
    int data;
    Myclass5(const Myclass5 &other)
    {
        data = other.data;
    }
};

int main()
{
    Myclass1 obj1;                   // object created using default constructor
    Myclass2 obj2(420);              // object created using parameterized constructor
    Myclass3 *obj3 = new Myclass3(); // object created using new keyword
    obj3->data = 50;
    Myclass4 obj4[5]; // array of objects

    cout << "Object data of Myclass1: " << obj1.data << endl;
    cout << "Object data of Myclass2: " << obj2.data << endl;
    cout << " Object data of Myclass3: " << obj3->data << endl;
    delete obj3; // don't forget to delete the dynamically allocated object as it does not have automatic garbage collector like java
    for (int i = 0; i < 5; i++)
    {
        cout << "Object: " << i + 1 << ", Data: " << obj4[i].data << endl;
    }
}