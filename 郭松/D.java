import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int c = sc.nextInt();
            for (int k = 0; k < c; k++) {

                int n = sc.nextInt();
                int[][] arr = new int[n][n];
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j <= i; j++) {
                        arr[i][j] = sc.nextInt();
                    }
                }
                int[][] dp = new int[n][n];
                dp[0][0] = arr[0][0];
                for (int i = 1; i < n; i++) {
                    for (int j = 0; j <= i; j++) {
                        if (j == 0)
                            dp[i][j] = arr[i][j] +dp[i - 1][j];
                        else if (j == i)
                            dp[i][j] = arr[i][j] +dp[i - 1][j - 1];
                        else
                            dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
                    }
                }
                int max = 0;
                for (int i = 0; i < n; i++) {
                    max = Math.max(max, dp[n - 1][i]);
                }
                System.out.println(max);
            }
        }
    }
}
