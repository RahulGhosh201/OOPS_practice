#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // public getter and setter methods to access private members
    void setName(string name)
    {
        name = name;
    }

    void setAge(int age)
    {
        age = age;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};
// in this example, the name and age members of the student class
//     are encapsulated as they are declared as private members. Public getter and setter methods are provided here
//     to access and modify these private members.
//     This way the intrnal data is encapsulated within the class and external code can only
//     access it through the public methods, ensuring data integrity and security.
