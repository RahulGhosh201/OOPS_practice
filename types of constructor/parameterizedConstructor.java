import java.util.*;

class ABC {
    private int x;

    ABC(int x) {
        this.x = x;
    }
}

public class parameterizedConstructor {
    public static void main(String[] args) {
        ABC a = new ABC(5);
    }
}
