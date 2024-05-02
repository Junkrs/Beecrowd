//Bee 1002 - Area of a Circle

import java.io.IOException; 
import java.util.*;
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        double R, p, A;

        p = 3.14159;
        R = in.nextFloat();

        A = p * (R*R);

        System.out.println(String.format("A=%.4f", A));
        in.close();
    }
}