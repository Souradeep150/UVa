/* Date: 12.08.15
Problem:   11498 - Division of Nlogonia
*/

#include <stdio.h>

int main()
{
	int n, a, b, x, y,i;

	while(scanf("%d", &n) && n){

		scanf("%d %d", &a, &b);
		for(i=0; i<n; i++){
			scanf("%d %d", &x, &y);
			if(a==x || b==y){
				printf("divisa\n");
			}
			else if(x>a && y>b) printf("NE\n");
			else if(x<a && y>b) printf("NO\n");
			else if(x>a && y<b) printf("SE\n");
			else printf("SO\n");
		}
	}


    return 0;
}
