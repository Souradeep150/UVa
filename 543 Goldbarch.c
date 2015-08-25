/* Method sieve */
/* Problem: 543 Goldbarch
*/

#include <stdio.h>
#include <math.h>

#define SIZE 1000000


int prime[SIZE];

void sieve()
{
	int i, M;
	for(i=0; i<SIZE; i++){
		prime[i]=1;
	}
	for(i=2; i<SIZE; i+=2){
		prime[i]=0;
	}
	for(i=3; i<sqrt(SIZE); i++){

		if(prime[i]){
			for(M=i*i; M<SIZE; M+=i){
				prime[M]=0;
			}
		}
	}
	/* rest of all i index
		is prime.
	*/

}

int main()
{
	long n, x, M, i;
	sieve();
	prime[2]=1;
	while(	scanf("%ld", &n) && n){
	x=0;
	for(i=2; i<=n/2; i++){
		if(prime[i] && prime[n-i]){
			printf("%ld = %ld + %ld\n", n, i, n-i);
			x=1;
		
		}if(x==1) break;
	}
	}

	return 0;
}
