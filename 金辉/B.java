package testBUPT;

import java.util.Scanner;

public class B {
	public static void main(String[] args) {
		
		Scanner cin = new Scanner(System.in);
		String res = "";
		while(cin.hasNext()) {
			int n = cin.nextInt();
			int r =  cin.nextInt();
			String str = "";
		     while(n!=0){
		         str = n%r+str;
		         n = n/r;
		     }
		     
	         System.out.println(str);
		         
		}
	}
}
