#include <bits/stdc++.h>
using namespace std;

class Myclass
{
private:
    int age;
    string name;

public:
    Myclass(int x, string y)
    {
        age = x;
        name = y;
    }

    void display()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

int main()
{
    Myclass obj(25, "Rahul");
    obj.display();
    return 0;
}