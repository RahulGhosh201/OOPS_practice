import java.util.*;

// Parent class (superclass)
class Animal {
    void eat() {
        System.out.println("The animal is eating.");
    }
}

// Child class (subclass) inheriting from Animal
class Dog extends Animal {
    void bark() {
        System.out.println("The dog is barking.");
    }
}

public class singleInheritance {
    public static void main(String[] args) {
        // creating a object from the subclass
        Dog d = new Dog();
        d.bark();
        d.eat();// eat() is at parent class whuch is inherited by the sub class here

        // creating another object from the parent class
        Animal a = d;
        a.eat();
    }
}
