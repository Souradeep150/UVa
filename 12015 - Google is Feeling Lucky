/* Date: 18.08.15
Problem: Google I'm feeling
*/
#include<stdio.h>
 
int main()
{
int input[10];
int i,maxi, x=0, n, I;
char c[11][100];
 
scanf("%d", &n);
 
while(n--){
	x++;
 
	for (i=0; i<=5; i++){
		scanf ("%s %d", &c[i], &input[i]);
	}
 
maxi=input[0];
 
	for (i=1; i<=9; i++){
		if(input[i]>maxi){
			maxi=input[i];
		}
	}
 
	printf("Case #%d:\n", x);
	for (i=0; i<=5; i++){
		if (input[i]==maxi){
			printf ("%s\n",c[i]);
		}
	}
}
return 0;
}
