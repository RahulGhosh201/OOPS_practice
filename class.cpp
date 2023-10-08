#include <bits/stdc++.h>
using namespace std;

// class name should always start with a capital letter
class Car
{
private:
    // instance variables
    string brand;
    string model;
    int year;

public:
    // parameterized constructor
    Car(string b, string m, int y) // constructor contains local variables
    {
        brand = b;
        model = m;
        year = y;
    }

    // member function to display car details
    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    // Getter function
    string getBrand()
    {
        return brand;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    // Setter function
    void setBrand(string b)
    {
        brand = b;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }
}; // a class sholud always ends with a ';'

int main()
{
    Car car1("Toyota", "Carolla", 2022);
    Car car2 = {"Honda", "Civic", 2021};
    // Accessing member functions to display car details
    cout << "Car 1 Details:" << endl;
    car1.displayInfo();

    cout << "\nCar 2 Details:" << endl;
    car2.displayInfo();

    // Using getter and setter functions
    car1.setYear(2023);
    cout << "\nCar 1 Details after setting year to 2023:" << endl;
    cout << "Year: " << car1.getYear() << endl;

    return 0;
}