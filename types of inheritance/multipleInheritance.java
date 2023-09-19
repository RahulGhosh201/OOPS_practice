import java.util.*;

//an interface always creates a method and that method gets implemented by using the keyword implements
interface Phone {
    void makeCall();
}

interface Computer {
    void browseInternet();
}

class SmartPhone implements Phone, Computer {
    public void makeCall() {
        System.out.println("Calling someone");
    }

    public void browseInternet() {
        System.out.println("Browsing internet");
    }
}

public class multipleInheritance {
    public static void main(String[] args) {
        SmartPhone s = new SmartPhone();
        s.makeCall();
        s.browseInternet();

        Computer c = s;// as we can see another object can be created from the interface
        s.browseInternet();// this object contains all the method described in the class
    }
}
