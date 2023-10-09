#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
protected:
    int protectedVar;
};

class DerivedClass : public BaseClass
{
public:
    void setProtectedVar(int val)
    {
        protectedVar = val;
    }
    int cal(int x)
    {
        return (protectedVar + x);
    }
};

int main()
{
    DerivedClass obj;
    obj.setProtectedVar(10);
    cout << "Calculation: " << obj.cal(5) << endl;
}