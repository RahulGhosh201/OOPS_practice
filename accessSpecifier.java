import java.util.*;

class A {
    public int publicField;
    private int privateField;
    protected int protectedField;
    int defaultField;

    public void publicMethod() {
        // this method can be accessed from anywhere
    }

    private void privateMethod() {
        // this methiod can be accessed only within the class
    }

    protected void protectedMethod() {
        // this method is accessed from within the classes and subclasses and the main
        // function
    }

    void defaultMethod() {
        // this method can be accessed within the package
    }
}

class B extends A {
    public void accessFieldsAndMethods() {
        publicField = 1;// accessible
        // privateField=2;//as we can privateField k sudhu matro class r modhyei access
        // kora jay even subclass eo take access kora ja66e na
        protectedField = 3;// accessible from same class, sub class and from different package only if
                           // accessing class is a subclass of the class containing the field
                           // there is a
        defaultField = 4;// accessible sudhu matro same package theke onno package e accissible noy
    }
}

public class accessSpecifier {
    public static void main(String[] args) {
        B b = new B();
        b.defaultMethod();
        b.protectedMethod();
        // b.privateMethod();//not accessible
        b.publicMethod();
    }
}
