import java.math.BigInteger;
import java.util.Scanner;

 class Main {
	 
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger sum;
		BigInteger a, b;
		int tc;
		tc = input.nextInt();
		for(int i = 0; i<tc; i++){
			a = input.nextBigInteger();
			b = input.nextBigInteger();
			String s = a.toString();
			String s2 = b.toString();
			
			s = new StringBuffer(s).reverse().toString();
			s2 = new StringBuffer(s2).reverse().toString();
			
			a = new BigInteger(s);
			b = new BigInteger(s2).add(a);
			s = b.toString();
			s = new StringBuffer(s).reverse().toString();
			a = new BigInteger(s);
			System.out.println(a);
		}
	}

}
