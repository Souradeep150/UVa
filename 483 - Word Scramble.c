/* Date: 07.08.15
Problem: Word Scramble
*/

#include<stdio.h>
#include <string.h>

int main()
{
    int a=0,i,d,e, p=0;
	char c[1000], m[1000];
	char z = '\0';

	while(gets(c)){
		d= strlen(c);

		for(i=0; i<=d; i++){
			m[p] = c[i];
	
			p++;
			if(c[i]== 32 || c[i]== z){
				for(e=p-2; e>=0; e--){
					printf("%c", m[e]);
				}
				if(i!=d){
					printf(" ");
				}
				p=0;
			
			}
		} printf("\n");
	}

    return 0;
}
