/* Date: 29.08.15
Problem: Tex quotes
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char c[10000];
	int i, j, s;
	int x=0, y=0;

	while(gets(c)){
		for(i=0; i<strlen(c); i++){

			if(x==1 && c[i]=='"'){
				c[i]= 39;
				printf("%c", c[i]);
				x=0;
			}
			if(x==0 && c[i]=='"'){
				c[i]= '`';
				printf("%c", c[i]);
				x=1;
			}
			printf("%c", c[i]);
		} printf("\n");
	}
	return 0;
}
