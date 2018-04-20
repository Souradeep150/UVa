import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;
 
public class Test{
	static BigInteger Fact(int n){
		BigInteger sum = new BigInteger(1+"");
	
		for(int i = 1; i<= n; i++) {
		
			sum = sum.multiply(BigInteger.valueOf(i));
			
		}
		return sum;
	}
 
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader (new InputStreamReader(System.in));
		 PrintWriter pw = new PrintWriter(System.out, true);
		 Scanner sc = new Scanner(System.in);

		BigInteger a,b;
		int n, x;
		long sum;
		char c;
		
		String s, r;
		while(sc.hasNext()){
			sum = 0;
			n = sc.nextInt();
			a = Fact(n);
			s = a.toString();

			for(int i=s.length()-1; i>=0; i--){
				c = s.charAt(i);
				x = c-'0';
				sum = sum+x;
				 
			}System.out.println(sum);
		}
		
 
		in.close();
	}
 
}
