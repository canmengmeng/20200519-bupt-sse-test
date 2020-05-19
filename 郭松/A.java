import java.util.*;
import java.io.*;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int m = sc.nextInt();
            int n = sc.nextInt();
            StringBuilder sb = new StringBuilder();
            for (int i = m; i <= n; i++) {
                int a = i / 100;
                int b = i % 100 / 10;
                int c = i % 10;
                if (a * a * a + b * b * b + c * c * c == i) {
                    sb.insert(sb.length(), i).insert(sb.length(), " ");
                }
            }
            if (sb.length() == 0) {
                System.out.println("no");
            } else {
                System.out.println(sb.deleteCharAt(sb.length() - 1).toString());
            }
        }
    }
}
