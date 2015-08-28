/* Date: 28.08.15
Problem: 900 - Brick Wall Patterns
*/

#include <stdio.h>

long long display[50];

long long fibo(){

long long first=1, second=1;
	int i=0;


	for(i=1; i<=50; i++)
	{
		display[i]= second;
		second= display[i]+first;
		first=display[i];

//		printf("%lld\n", display[i]);
	}
}

int main()
{
	int a;
	fibo();

	while(scanf("%d", &a) && a){
		printf("%lld\n", display[a]);
	}
	return 0;
}
