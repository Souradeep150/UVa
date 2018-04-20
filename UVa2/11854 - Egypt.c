/* Date: 06.09.15
Problem: 11854 - Egypt
*/

#include <stdio.h>
#include <string.h>

int main()
{
	long long sum, sum2, sum3;
	int a, b, c;

	while(1){
		scanf("%d %d %d", &a, &b, &c);
	if(a==0 && b==0 && c==0) break;
		sum= (a*a)+ (b*b);
		sum2= (a*a)+ (c*c);
		sum3= (b*b)+ (c*c);

		if(sum== c*c){
			printf("right\n");
		}
		else if(sum2== b*b){
			printf("right\n");
		}
		else if(sum3== a*a){
			printf("right\n");
		}
		else printf("wrong\n");
	}
    return 0;
}
