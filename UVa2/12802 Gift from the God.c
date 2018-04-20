/* Date: 07.08.15
Problem: 12802 Gift from the God
*/

#include <stdio.h>

int prime(int a);
int palind(int n);

int prime(int a){
	int i;

	for(i=2; i<a; i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int palind(int n){
	int x=n, r;
	long j=0;

	while(n>0){
		r= n%10;
		n= n/10;
		j= j*10+r; /* Recursivly Stored number */
	}
	if(j==x) return 1;
	else return 0;
}

int main()
{
	int n;
	for(; ;){
		scanf("%d", &n);

		if(prime(n)==1 && palind(n)==1){
			printf("%d\n", n*2);
			break;
			return 0;
		}
		else printf("%d\n", n*2);

	}

return 0;
}
