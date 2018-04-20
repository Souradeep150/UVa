/* Date: 14.09.15
Problem: 10038 - Jolly Jumpers
*/

#include<stdio.h>
#include <stdlib.h>


int main()
{
	int n[3000], m[3000];
	int i, x, c, t, l;


	while(scanf("%d", &t) != EOF){
		c = 1;
		for(i=0; i<t; i++){
			scanf("%d", &n[i]);
		}

		for(i=0; i<t-1; i++){
			m[i] = abs(n[i+1] - n[i]);
		}

		for(i=0; i<t-1; i++){
			for(l=i+1; l<t-1; l++){
				if(m[i]> m[l]){
					int temp = m[i];
					m[i]= m[l];
					m[l]= temp;
				}
			}
		}


		for(i=0; i<t-1; i++){
			if(m[i] != i+1){
				c=0;
				break;
			}
		}
		if(c == 0){
			printf("Not jolly\n");
		}
		else printf("Jolly\n");
	}

  return 0;
}
