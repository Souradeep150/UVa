/* Date: 10.11.15
Problem: 113 - Power of Crypto
*/
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	/* For sqrt of BigInteger */
	static BigInteger sqrt(BigInteger n)
	{
		Double d=Math.sqrt(n.doubleValue());
		n=BigInteger.valueOf(d.longValue());
		return n;
	}

	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		BigInteger k = new BigInteger(0+"");
		BigInteger p = new BigInteger(0+"");
		int x;
		double b = 10.00;
		
		while(in.hasNext()){
			x = in.nextInt();
			p = in.nextBigInteger();
			
			double K = Math.log10(p.doubleValue());
	
			K = (K/x);
			long res = Math.round( Math.pow(b, K)); 
			System.out.println(res);
			
		}
		in.close();
	}

}

