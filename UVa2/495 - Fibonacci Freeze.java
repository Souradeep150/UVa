/* Date: 26.10.2015
Problem: 495 - Fibonacci Freeze
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		while((line=br.readLine())!=null){
			int n=Integer.parseInt(line);
			
			System.out.println("The Fibonacci number for " +n+" is "+fibo(n));
			
		}
		

	}
	static BigInteger fibo(int n){
		
		BigInteger j = new BigInteger("0");
		BigInteger h = new BigInteger("1");
		BigInteger k = new BigInteger("0");
		BigInteger t = new BigInteger("0");
		BigInteger i = new BigInteger("1");
		
		while (n>0){
			if(n%2==1){
				t = j.multiply(h);
				j = i.multiply(h).add( j.multiply(k)) .add(t);
				i = i.multiply(k).add(t);
				}
				t = h.multiply(h);
				h = k.multiply(h).multiply(new BigInteger("2")).add(t);
				k = k.multiply(k).add(t);
				n = (int) n/2;
				} 
		return j;	
	}
}
