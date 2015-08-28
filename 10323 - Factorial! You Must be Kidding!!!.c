/* Date: 28.08.15
Problem: 10323 - Factorial! You Must be Kidding!!!
*/
#include <stdio.h>

long long display[20];

long long fact(){

	long long num=1;
	int i=0;

	display[i]=1;
	for(i=1; i<=13; i++)
	{
		num = num * i;
		display[i]= num;
	}
}

int main()
{
	int a;
	fact();

	while(scanf("%d", &a) != EOF){
		if(a>13){
			printf("Overflow!\n");
		}
		else if(a<0 && a%2!=0){
			printf("Overflow!\n");
		}

		else if(a<8){
			printf("Underflow!\n");
		}
		else{
			printf("%lld\n", display[a]);
		}
	}
	return 0;
}
