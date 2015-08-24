/* Date: 18.08.15
Problem: 10302 - Summation of Polynomials
*/
#include<stdio.h>

int main()
{
	long long x, input;
	int i=0, t;
	long long sum, n;

	while(scanf("%lld", &x) !=EOF){
		sum=(x*(x+1)/2)*(x*(x+1)/2);
		printf("%lld\n", sum);
	}

return 0;
}
