/* Date: 03.05.16
Problem: 913 - Joana and the Odd Numbers
*/
#include <stdio.h>
#include <string.h>

#define size 100
#define LL long long



int main()
{

	long long i, s, t, odd, even;

	while(scanf("%lld", &t) != EOF){
		odd = (3*(t*t)+ 6*t- 15)/2;
		printf("%lld\n", odd);
	}
	return 0;
}
