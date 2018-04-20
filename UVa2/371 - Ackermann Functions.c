/* Date: 10.11.15
Problem: 371 - Ackermann Functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	long x, j, g, m, i, a;
	long long n;

	while(scanf("%ld %ld", &i, &j) && i && j){
		m= 1;
		g= 1;

		if(i> j){
			int tem = i;
			i = j;
			j = tem;
		}
		long I = i;
		long J = j;

		while(i<=j){
		n = i;
		int temp = 0;
			while(1){
				if(n%2==0){
					n = n/2;
				}
				else{
					n = 3*n +1;
				}
				temp++;
				if(n==1) break;
			}
			i++;
			if(temp > m){
				g = i-1;
				m = temp;
			}
		}


	printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n",I, J, g, m);
	}


  return 0;
}

