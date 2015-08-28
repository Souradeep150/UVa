/* Date: 28.08.15
Problem: 10394 - Twin Primes
*/

#include <stdio.h>
#include <math.h>

#define SIZE 100000000


int prime[SIZE];
long first[1000000], second[1000000];

/* Method sieve */

void sieve()
{
	long long i, M;
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
	/*
	rest of all i index 1 is prime
	*/

}
void twinP(){

	long long i;
	long x= 0;
	for(i=3; i<20000000; i+=2){

		if(prime[i] && prime[i+2]){
			x++;
			first[x]= i;
			second[x]= i+2;
		}

	}
}

int main()
{
	sieve();
	twinP();
	int n;
	while(scanf("%d", &n) != EOF){
		printf("(%ld, %ld)\n", first[n], second[n]);
	}
	return 0;
}
