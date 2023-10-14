#include <bits/stdc++.h>
using namespace std;

class Myclass
{
public:
    Myclass()
    {
        // default constructor
        cout << "Default constructor called" << endl;
    }
    void display()
    {
        cout << "Hello from Myclass" << endl;
    }
};

int main()
{
    Myclass obj;
    obj.display();
    return 0;
}