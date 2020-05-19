package testBUPT;

import java.util.Scanner;

public class C {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while(cin.hasNext()) {
			int n = cin.nextInt();
			if(n == 0) break;
			int[] dp = new int[n+1];
			dp[0] = 1;
			for(int i=1;i<=n;i++) {
				if((i-1)%4 ==0) {
					dp[i] = dp[i-1] *2 ;
				}
				else dp[i] = dp[i-1];
			}
			System.out.println(dp[n]);
		}
	}
}
