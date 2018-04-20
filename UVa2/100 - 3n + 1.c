/* Date: 01.11.15
Problem: 100 - 3n + 1
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

	while(scanf("%ld %ld", &i, &j) != EOF){
		m= 1;
		long I = i;
		long J = j;

		if(i<j){
			while(i<=j){
			n = i;
			int temp = 0;
				while(n !=1){
					if(n%2==0){
						n = n/2;
					}
					else{
						n = 3*n +1;
					}
					temp++;
				}
				i++;
				if(temp > m){
					g = i-1;
					m = temp;
				}
			}
		}
		else{

			while(j<=i){
			n = j;
			int temp = 0;
				while(n != 1){
					if(n%2==0){
						n = n/2;
					}
					else{
						n = 3*n +1;
					}
					temp++;
				}
				j++;
				if(temp > m){
					g = j-1;
					m = temp;
				}
			}
		}
	printf("%ld %ld %ld\n",I, J, m);
	}


  return 0;
}

