#include <bits/stdc++.h>
using namespace std;

// abstract class declaration
class AbstractClass
{
public:
    // Pure virtual function
    virtual void pureVirtualFunction() = 0;

    // Normal member function
    void nonVirtualFunction()
    {
        cout << "This is a non-virtual function in the abstract class" << endl;
    }
};

// derived class
class DerivedClass : public AbstractClass
{
public:
    // override the pure virtual function
    void pureVirtualFunction() override
    {
        cout << "Pure virtual function overriden in the derived class" << endl;
    }
};

int main()
{
    // AbstractClass obj; //we can't instantiate an abstract class
    DerivedClass obj;
    obj.pureVirtualFunction();
    obj.nonVirtualFunction();
    return 0;
}