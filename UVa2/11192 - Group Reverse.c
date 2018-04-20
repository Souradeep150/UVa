/* Date: 20.11.15
Problem: 11192 - Group Reverse
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int t, g, i, j, k, l, m, p;
    int x;
    char c[100], rev[100];

	while(scanf("%d", &g)){
		if(g==0) break;
		gets(c);
		x=0;
        l = (strlen(c)-1)/g;

	for(k=0; k<g; k++){
			for(i=0; i<=l; i++){
				rev[x] = c[x];
				x++;
			}
			for(j=x-1; j>=x-l; j--){
				printf("%c", rev[j]);
			}
            x--;
	} printf("\n");

	}

    return 0;
}
