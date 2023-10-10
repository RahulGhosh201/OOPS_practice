#include <iostream>

class AbstractShape
{
public:
    // Pure virtual function
    virtual void draw() const = 0;

    // Normal member function
    void displayArea() const
    {
        std::cout << "Area: " << calculateArea() << std::endl;
    }

    // Pure virtual function for calculating area
    virtual double calculateArea() const = 0;
};

class Circle : public AbstractShape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function 'draw' from AbstractShape
    void draw() const override
    {
        std::cout << "Drawing a circle" << std::endl;
    }

    // Implementation of the pure virtual function 'calculateArea' from AbstractShape
    double calculateArea() const override
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public AbstractShape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementation of the pure virtual function 'draw' from AbstractShape
    void draw() const override
    {
        std::cout << "Drawing a rectangle" << std::endl;
    }

    // Implementation of the pure virtual function 'calculateArea' from AbstractShape
    double calculateArea() const override
    {
        return width * height;
    }
};

int main()
{
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Using polymorphism to call draw and calculateArea functions
    AbstractShape *shapes[] = {&circle, &rectangle};
    for (const auto &shape : shapes)
    {
        shape->draw();
        shape->displayArea();
    }

    return 0;
}
