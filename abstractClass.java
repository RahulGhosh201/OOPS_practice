import java.util.*;

abstract class Shape {
    public abstract double calculateArea();

    public void display() {
        System.out.println("This is a shape");
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double rad) {
        this.radius = rad;
    }

    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}

public class abstractClass {
    public static void main(String[] args) {
        Shape s = new Circle(14);
        s.calculateArea();
    }
}
