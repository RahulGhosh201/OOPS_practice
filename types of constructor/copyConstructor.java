import java.util.*;

class Student {
    private String name;// instance variable
    private int age;// instance vaiable

    // constructor to initialize the object
    public Student(String name, int age) {// local variable
        this.name = name;// here the first name is the local variable
        this.age = age;
    }

    // copy constructor
    public Student(Student otherStudent) {
        this.name = otherStudent.name;
        this.age = otherStudent.age;
    }

    // getter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

public class copyConstructor {
    public static void main(String[] args) {
        // creating a student object using the constructor
        Student s1 = new Student("Rahul", 24);

        // creating another student object using the copy constructor
        Student s2 = new Student(s1);

        System.out.println("S1-> Name: " + s1.getName() + ", Age: " + s1.getAge());
        System.out.println("S2-> Name: " + s2.getName() + ", Age: " + s2.getAge());
        // we will see that both the results will be same as s2 student object is
        // created from the s1 object
    }
}