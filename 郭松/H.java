import java.util.*;
import java.io.*;

public class H {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int m = sc.nextInt();
            for (int i = 0; i < m; i++) {
                boolean bb= false;
                int a = sc.nextInt();
                int b = sc.nextInt();
                LinkedList<Integer> ll = new LinkedList<>();
                for (int j = 1; j <= a / 2; j++) {
                    if (a % j == 0)
                        ll.add(j);
                }
                int sum1 = 0;
                for (int j :
                        ll) {
                    sum1 += j;

                }
//                System.out.println(sum1);
                if (sum1 != b)
                    bb = false;
                else {
                    ll = new LinkedList<>();
                    for (int j = 1; j <= b / 2; j++) {
                        if (b % j == 0)
                            ll.add(j);
                    }
                    int sum2 = 0;
                    for (int j :
                            ll) {
                        sum2 += j;
                    }
//                    System.out.println(sum2);
                    if (sum2 != a)
                        bb = false;
                    else
                        bb = true;
                }
                if (bb)
                    System.out.println("YES");
                else
                    System.out.println("NO");
            }
        }
    }
}
