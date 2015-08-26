/* Date: 26.08.15
Problem: 11332 - Summing Digits
*/

#include<stdio.h>
#include <stdlib.h>

long sumd(long n){
	long x=0;

	if(n<10){
		return n;
	}
	for(; ;){

		if(n<100){
			x= x+ (n%10);
			x= x+ (n/10);
			if(x>9) return sumd(x);
			else{ return x;}

		}
		else{
			x= x+ (n%10);
			n= n/10;
		}
	}

}

int main()
{
	long n;

	while(scanf("%ld", &n) && n){

		printf("%ld\n", sumd(n));
	}

  return 0;
}
