/* Date: 24.08.15
Problem: 591 - Box of Bricks
*/

#include<stdio.h>

int main()
{
	int num[100], sum, res;
	int i, x=0, t, n=0;

	while(scanf("%d", &t) && t){
		x++;
		sum=0, res=0;
		for(n=0 ; n<t; n++){
			scanf("%d", &num[n]);
			sum = sum+num[n];
		}
		sum = sum/t;
		for(i=0; i<t; i++){
			if(num[i]>sum){
				res = res+(num[i]-sum);
			}
		}
		printf("Set #%d\n", x);
		printf("The minimum number of moves is %d.\n\n", res);
	}
  return 0;
}
