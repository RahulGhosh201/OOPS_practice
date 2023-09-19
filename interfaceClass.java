import java.util.*;

interface Phone {
    void makeCall();
}

interface Computer {
    void browsingInternet();
}

class smartPhone implements Phone, Computer {

    public void makeCall() {
        System.out.println("Making a call");
    }

    public void browsingInternet() {// here public access specifier is must
        System.out.println("Browsing the internet");
    }
}

public class interfaceClass {
    public static void main(String[] args) {
        smartPhone s = new smartPhone();
        s.makeCall();// Making a call
        s.browsingInternet();// Browse the internet
    }
}
