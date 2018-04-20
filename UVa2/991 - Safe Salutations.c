/* Date: 11.11.15
Problem: 991 - Safe Salutations
*/
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI acos(-1)


int main()
{
	int cros[20]={
	1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786 }; /* Brute Force of Catalan number */

	int i=0, n;

	while(scanf("%d", &n) != EOF){
		n=n-1;
		if(i==1)
            printf("\n");
        printf("%d\n", cros[n]);
        i=1;
	}

    return 0;
}
