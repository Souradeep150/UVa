/* Date: 21.11.15
Problem: 11608 - No Problem
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int t, g, i, j, k, l, m, p;
    int x=1, total;
    int req[100], made[100];

	while(scanf("%d", &total)){
		if(total<0) break;

		made[0] = total; /* Because made problem could use only next month or later */

		for(i=1; i<13; i++){
			scanf("%d", &made[i]);
		}
printf("Case %d:\n", x++);
		for(j=0; j<12; j++){
			scanf("%d", &req[j]);
			if(req[j] <= total ){
				total = total- req[j];
				printf("No problem! :D\n");
			}
			else{
				printf("No problem. :(\n");
			}
			total = total+ made[j+1];
		}
		

	}

    return 0;
}
