import java.math.BigInteger;
import java.util.Scanner;
 
public class Main {
 
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger sum, tem;
		int N, A;
		while (input.hasNextInt()) {
				N = input.nextInt();
				A = input.nextInt();
 
				sum = new BigInteger("0");
				tem = BigInteger.valueOf(A);
 
				for (int i = 1; i <= N; i++)
	                sum = sum.add(BigInteger.valueOf(i).multiply(tem.pow(i)));
 
	            System.out.println(sum);
		}
 
	}
 
}
