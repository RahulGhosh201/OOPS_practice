import java.util.*;

class Test {
    public int calcaulate(int x, int y) {
        return x + y;
    }

    public int calculate(int x, int y, int z) {
        return x + y + z;
    }

    public double calcaulate(double x, int y) {
        return x + (double) y;
    }
}

public class compileTimePolymorphism {
    public static void main(String[] args) {
        Test t = new Test();
        t.calcaulate(1.5, 1);
        t.calcaulate(2, 3);
        t.calculate(1, 2, 3);
    }
}
