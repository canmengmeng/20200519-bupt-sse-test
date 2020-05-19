import java.util.*;
import java.io.*;

public class F {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[][] arr = new int[n + 1][n + 1];
            if (n == 0 & m == 0)
                break;
            for (int i = 0; i < m; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                int c = sc.nextInt();
                arr[a][b] = arr[b][a] = c;
            }
			//对于没有路径的结点标记为-1，表示不可达
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i != j)
                        if (arr[i][j] == 0)
                            arr[i][j] = -1;
                }
            }
			
			//下面循环是利用floyd算法对整个矩阵求最短路径
            for (int k = 1; k <= n; k++) {
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (i != j & arr[i][j] == -1 || arr[i][j] > arr[i][k] + arr[k][j])
                            arr[i][j] = arr[i][k] + arr[k][j];
                    }
                }
            }
			//arr[1][n]为起点到终点的最短路径
            System.out.println(arr[1][n]);
        }
    }
}
