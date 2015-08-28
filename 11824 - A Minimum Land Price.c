/* Date: 28.08.15
Problem : 11824 - A Minimum Land Price
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int pric[40];
	long total;
	int i, n, t, j, s;

	scanf("%d", &t);
	while(t--){
		s= 0;
		total= 0;
		for(i=0; ; i++){
			scanf("%d", &pric[i]);
			if(pric[i]==0) break;
			s= i;
		}

        for(i=0; i<s+1; i++){
			for(j=i+1; j<s+1; j++){
				if(pric[i]>pric[j]){
					int temp= pric[i];
					pric[i]= pric[j];
					pric[j]= temp;
				}
			}
        }
	int x= 1;
	
        for(i=s; i>=0; i--){
			total= total+ (2*pow(pric[i], x));
			x++;
        }
        if(total>5000000){
			printf("Too expensive\n");
        }
		else printf("%ld\n", total);
	}

	return 0;
}
