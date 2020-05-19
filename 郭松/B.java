import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            StringBuilder s = new StringBuilder(sc.next());
            boolean b = false;
            if (s.charAt(0) == '-') {
                s.deleteCharAt(0);
                b = true;
            }
            BigInteger bb = new BigInteger(s.toString());
            int r = sc.nextInt();
            if (bb.equals(new BigInteger("0"))) {
                System.out.println("0");
                continue;
            }
            char[] arr = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'F'};
            StringBuilder sb = new StringBuilder();

            while (!bb.equals(new BigInteger("0"))) {
                sb.append(arr[Integer.parseInt(bb.mod(new BigInteger(r + "")).toString())]);
                bb = bb.divide(new BigInteger(r + ""));
            }
            if (b)
                System.out.print("-");
            System.out.println(sb.reverse().toString());
        }
    }
}
