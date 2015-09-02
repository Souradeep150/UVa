/* Date: 01.09.15
Program: 10699 - Count the factors
 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
#define SIZE 100000000
 
int prime[SIZE];
 
void sieve()
{
	long long i, M;
	for(i=0; i<SIZE; i++){
		prime[i]=1;
	}
	for(i=2; i<SIZE; i+=2){
		prime[i]=0;
	}
	for(i=3; i<sqrt(SIZE); i+=2){
 
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
 
 
int main(){
 
 
    long long n , i;
    sieve();
    prime[2]=1;
 
    while( scanf("%lld", &n) && n){
        int x=0;
        if(n>0){
			printf("%lld = ", n);
            for(i=2; i<n; i++ ){
 
				if(prime[i] && n%i==0){
                    x++;
                    while (n%i==0)
                    {
                        n/=i;
                    }
				}
            }
            if(n>1){
                x++;
            } printf("%d\n", x);
        }
 
	}
 
    return 0;
}
