package testBUPT;

import java.util.Scanner;

public class H {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int count = cin.nextInt();
		for(int i=0;i<count;i++) {
			int a = cin.nextInt();
			int b = cin.nextInt();
			if(helper(a) == b && helper(b) == a) 
				System.out.println("YES");
			else 
				System.out.println("NO");
			
		}
	}
	public static int helper(int n) {
		int res = 0;
		for(int i=2;i<n;i++) {
			if(n%i ==0) res += i;
		}
		return res + 1;
	}
}
