import java.util.*;
import java.io.*;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int[] arr = new int[55];
            arr[1] = 1;
            arr[2] = 2;
            arr[3] = 3;
            arr[4] = 4;
            for (int i = 5; i < 55; i++) {
                arr[i] = arr[i - 4] + arr[i - 1] + 1;
            }
            int n = sc.nextInt();
            if (n == 0)
                break;
            System.out.println(arr[n]);
        }
    }
}
