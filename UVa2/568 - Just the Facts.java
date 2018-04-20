/* Date: 16.01.16
Problem: 568 - Just the Facts
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.math.BigInteger;
import java.util.Scanner;
 
public class Main{
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

		BigInteger a;
		int n;
		
		String s, r;
		while(sc.hasNext()){
			n = sc.nextInt();
			a = Fact(n);
			s = a.toString();
			for(int i=s.length()-1; i>=0; i--){
				if(s.charAt(i) != '0'){
					pw.printf("%5d -> %c\n", n, s.charAt(i));
					break;
				}
			}
		}
	
		in.close();
	}
 
}
