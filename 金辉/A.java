package testBUPT;

import java.util.Scanner;

public class A {
	public static boolean helper(int n) {
		int sum = 0;
		int copy = n;
				
		while(n!=0) {
			int a = n%10;
			sum += a*a*a;
			n /= 10;
		}
		if(sum == copy) return true;
		else return false;
	}
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		String res = "";
		while(cin.hasNext()) {
			int a = cin.nextInt();
			int b = cin.nextInt();
			if(a<100 || a>b || b>999) {
				System.out.println("no");
			} else {
				for(int i=a;i<=b;i++) {
					if(helper(i)) {
						res += " " + i;
					}
				}
				res = res.trim();
				if(res.length() == 0) {
					System.out.println("no");
				} else {
					System.out.println(res);
				}				
			}
		}
		
	}
	
}
