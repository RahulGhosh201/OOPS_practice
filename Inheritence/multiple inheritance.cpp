#include <bits/stdc++.h>
using namespace std;

class Base1
{
public:
    void d1()
    {
        cout << "Base1 display function" << endl;
    }
};

class Base2
{
public:
    void d2()
    {
        cout << "Base2 display function" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void d3()
    {
        cout << "Base3 display function" << endl;
    }
};

int main()
{
    // create an object of the derived class
    Derived obj;

    // call member functions from the derived class
    obj.d1();
    obj.d2();
    obj.d3();
    return 0;
}