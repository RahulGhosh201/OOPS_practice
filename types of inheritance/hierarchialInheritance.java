
//here we will see run-time polymorphism or method overriding
import java.util.*;

class Shape {
    void draw() {
        System.out.println("Drawing a shape");
    }
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing a circle");
    }
}

class Rectangle extends Shape {
    void draw() {
        System.out.println("Drawing a rectangle");
    }
}

public class hierarchialInheritance {
    public static void main(String[] args) {
        Shape s1 = new Rectangle();
        s1.draw();// Drawing a rectangle

        Shape s2 = new Circle();
        s2.draw();// Drawing a circle

        Shape s3 = new Shape();
        s3.draw();// Drawing a shape
    }
}
