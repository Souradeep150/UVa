/* Date: 19.11.15
Problem: 10324 - Zeros and Ones
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>


void swap(int *i, int *j) {
   int t = *i;
   *i = *j;
   *j = t;
}

int main()
{
    int t, i, j, k, l, m, p;
    int x, xx=0;
    char c[1000000];

	while(scanf("%s", c)==1){
        if(c[0]=='\n') break;
	x = 0;
	xx++;

		scanf("%d", &t);

		printf("Case %d:\n", xx);

		while(t--){
		x=0;
			scanf("%d %d", &i, &j);
			if(i>j) swap(&j, &i);

			for(m=i; m<j; m++){
				if(c[j] != c[m]){
					x= 1;
					printf("No\n");
					break;
				}
			}
			if (!x) printf("Yes\n");
		}
	}

    return 0;
}
