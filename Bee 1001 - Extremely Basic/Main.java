//Bee 1001 - Extremely Basic

import java.io.IOException; 
import java.util.*;
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int A, B;

        A = in.nextInt();
        B = in.nextInt();

        int X = A + B;

        System.out.println("X = " + X);
        in.close();
    }
 
}