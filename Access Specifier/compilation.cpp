#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
private:
    int privateVar = 15;

protected:
    int protectedVar = 10;

public:
    int publicVar = 5;
    void setprivateVar(int val)
    {
        privateVar = val;
    }
    void setprotectedVar(int value)
    {
        protectedVar = value;
    }

    int getprivateVar()
    {
        return privateVar;
    }

    int getprotectedVar()
    {
        return protectedVar;
    }
};

class DerivedClass : public BaseClass
{
public:
    // privateVar=20; as we can see private member can't be accessed from outside the class
    void setProtectedVar(int val)
    {
        protectedVar = val;
    } // can be accessed from the same and derived class
};

int main()
{
    BaseClass obj;
    obj.setprivateVar(105);
    obj.setprotectedVar(110);
    cout << obj.publicVar << endl;
    cout << obj.getprivateVar() << endl;
    cout << obj.getprotectedVar() << endl;
    return 0;
}

// if we are talking about the accessibility of access specifiers
// public-> base class+ derived class + outside the class + from another file
// protected-> base class+ derived class+ outside the class
// private-> base class+ not from outside the class