/* 
Problem: 369 - Combinations
*/

import java.math.BigInteger;
import java.util.Scanner;

 class Main {
	
	 static BigInteger fact(int n){
		BigInteger sum = new BigInteger(1+"");
	
		for(int i = 1; i<= n; i++) {
	
			sum = sum.multiply(BigInteger.valueOf(i));
			
		}
		return sum;
	}
	 
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger sum;
		BigInteger sec;
		int N,M;
		
		sum = new BigInteger(1+"");
		
		while (input.hasNext()) {

				N = input.nextInt();
				M = input.nextInt();
				if(N==0 && M== 0) break;
				sum = fact(N);
				sec = fact(M);
				sec = fact(N-M).multiply(sec);
				
				sum = sum.divide(sec);
				
				System.out.println(N+" things taken "+M+" at a time is "+sum+" exactly.");	
			
		}
		input.close();

	}

}
