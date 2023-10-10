#include <iostream>

class Complex
{
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Overloading the + operator for complex number addition
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overloading the << operator for easy output
    friend std::ostream &operator<<(std::ostream &out, const Complex &complex)
    {
        out << complex.real << " + " << complex.imaginary << "i";
        return out;
    }
};

int main()
{
    Complex num1(2.5, 3.7);
    Complex num2(1.2, 4.9);

    Complex sum = num1 + num2; // Calls the overloaded + operator
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
