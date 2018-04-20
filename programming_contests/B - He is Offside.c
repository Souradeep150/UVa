/* Date: 08.09.15
Problem: Problem B He is Offside (raihan vai)
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define size 100
#define LL long long



int main()
{

	int  i, a, b, d, t, n;

	while(scanf("%d %d", &a, &d) == 2){
		int num[a], num2[d];
		if(a==0 && d==0) break;

		for(i=0; i<a; i++){
			scanf("%d", &num[i]);
		}
		for(i=0; i<a-1; i++){
			if(num[0]>num[i+1]){
				num[0]= num[i+1];
			}
		}
		for(i=0; i<d; i++){
			scanf("%d", &num2[i]);
		}
		for(i=0; i<d; i++){
			for(n=i+1; n<d; n++){
				if(num2[i]> num2[n]){
					int temp = num2[i];
					num2[i]= num2[n];
					num2[n]= temp;
				}
			}
		}
		if(num[0]<num2[1]){
			printf("Y\n");

		}
		else printf("N\n");

	}

	return 0;
}
