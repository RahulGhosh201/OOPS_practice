#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void d1()
    {
        cout << "Inside Base class" << endl;
    }
};

class Derived1 : public Base
{
public:
    void d2()
    {
        cout << "Inside Derived1 class" << endl;
    }
};

class Derived2 : public Base
{
public:
    void d3()
    {
        cout << "Inside Derived2 class" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2
{
public:
    void d4()
    {
        cout << "Inside Final Derived class" << endl;
    }
};

int main()
{
    FinalDerived obj;
    // obj.d1();
    obj.d2();
    obj.d3();
    obj.d4();
}