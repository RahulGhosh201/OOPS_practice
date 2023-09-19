import java.util.*;

class Phone {
    void functioning() {
        System.out.println("We can call using a Phone");
    }
}

class SmartPhone extends Phone {
    void functioning() {
        System.out.println("We can call and browse internet using a SmartPhone");
    }
}

public class runTimePolymorphism {
    public static void main(String[] args) {
        SmartPhone s = new SmartPhone();
        s.functioning();// We can call and browse internet using a SmartPhone
        Phone p = s;
        p.functioning();// We can call using a Phone
    }
}
