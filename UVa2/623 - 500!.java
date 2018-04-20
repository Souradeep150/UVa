/* Date: 28.10.15
Problem: 623 - 500!
*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger sum;
		int B ;
		
		sum = new BigInteger(1+"");
		while (input.hasNext()) {

				B = input.nextInt();
				sum = new BigInteger(1+"");
				
				for(int i = 1; i<= B; i++) {
			
					sum = sum.multiply(BigInteger.valueOf(i));
					
				}
				System.out.println(B+"!");
				System.out.println(sum);	
			
		}
	
	}

}
