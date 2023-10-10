#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Draw a shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Draw a circle" << endl;
    }
};

int main()
{
    Shape *shape = new Circle();
    shape->draw();
    // delete shape;
    return 0;
}