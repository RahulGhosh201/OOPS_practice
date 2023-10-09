#include <bits/stdc++.h>
using namespace std;

class Myclass
{
private:
    int privateVar;

public:
    void setPrivateVar(int val)
    {
        privateVar = val;
    }
};

int main()
{
    Myclass obj;
    obj.setPrivateVar(5);
}