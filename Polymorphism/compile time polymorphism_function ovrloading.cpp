#include <bits/stdc++.h>
using namespace std;

class Myclass
{
public:
    int print(int a)
    {
        return a;
    }

    double print(double a)
    {
        return a;
    }

    int print(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Myclass obj;
    int x = obj.print(5);
    double y = obj.print(5.5);
    int z = obj.print(4, 3);
    cout << "x: " << x << "y: " << y << "z: " << z << endl;
    return 0;
}