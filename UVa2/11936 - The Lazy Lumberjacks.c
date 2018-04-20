/* Date: 08.09.15
Problem: 11936 - The Lazy Lumberjacks
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define size 100
#define LL long long



int main()
{

	int  i, a, b, c, d, t, n;
	int num[11], num2[11];

	scanf("%d", &t);
	while(t--){

		scanf("%d %d %d", &a, &b, &c);
		if(a+b <= c || a+c <= b || b+c <= a){
			printf("Wrong!!\n");
		}
		else printf("OK\n");

	}


	return 0;
}
