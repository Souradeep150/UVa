/* Date: 29.08.15
Problem: 10450 - World Cup Noise
*/

#include <stdio.h>

long long display[80];

long long fibo(){

long long first=1, second=2;
	int i=0;


	for(i=1; i<=50; i++)
	{
		display[i]= second;
		second= display[i]+first;
		first=display[i];
	}
}

int main()
{
	int a, t, x=0;
	fibo();

	scanf("%d", &t);
	while( t--){
		x++;
		scanf("%d", &a);
		printf("Scenario #%d:\n%lld\n\n", x, display[a]);
	}
	return 0;
}
