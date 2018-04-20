/* Date: 05.09.15
Problem: 11945 - Financial Management
*/
#include <stdio.h>
#include <stdlib.h>

#define LL long long



int main(){

	double num[100], sum=0;
	long a, b, c, n, i, t;

	scanf("%ld", &t);
	
	for(i=1; i<=t; i++){
		i=1;
		sum = 0;
		for(a=0; a<12; a++){
			scanf("%lf", &num[a]);
			sum = sum+ num[a];
		}
		sum /=12.00;
		LL temp = sum;
		LL last = temp % 1000;
		temp/= 1000;
		double p = sum - (LL)sum;
		
		printf("%d $", i);
		if(temp >0) {
			printf("%lld,", temp);
		}
		printf("%.2lf\n", p+last);
	}
	return 0;
}
