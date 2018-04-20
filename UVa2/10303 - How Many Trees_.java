/* Problem: 10303 - How Many Trees? */

import java.math.BigInteger;
import java.util.Scanner;

 class Main {
	
	 static BigInteger cat(int n){
		BigInteger sum = new BigInteger(1+"");
	
	
		for(int i = 1; i<= n; i++) {
	
			sum = sum.multiply(BigInteger.valueOf(i));
			
		}
		return sum;
	}
	 static BigInteger cat2(int n){
		BigInteger sum = new BigInteger(1+"");
	
	
		for(int i = 1; i<= n*2; i++) {
	
			sum = sum.multiply(BigInteger.valueOf(i));
			
		}
		return sum;
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger sum;
		BigInteger sec;
		int B ;
		
		sum = new BigInteger(1+"");
		while (input.hasNext()) {

				B = input.nextInt();
				sum = cat2(B);
				int c = B+1;
				sec = cat(B).multiply(cat(B)).multiply(BigInteger.valueOf(c));
				
				sum = sum.divide(sec);
				System.out.println(sum);	
			
		}

	}

}
