import java.util.*;

class GrandParent {
    void wisdom() {
        System.out.println("Offering wisdom");
    }
}

class Parent extends GrandParent {
    void work() {
        System.out.println("Working for a living");
    }
}

class Child extends Parent {
    void play() {
        System.out.println("Playing in the field");
    }
}

public class multiLevelInheritance {
    public static void main(String[] args) {
        Child c = new Child();
        c.wisdom();
        c.work();
        c.play();
        // as we can see the object created using child class has inherited every method
        // chain wise
    }
}
