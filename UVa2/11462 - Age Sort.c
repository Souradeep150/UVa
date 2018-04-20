/* Date: 28.10.15
Problem: 11462 - Age Sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100000

int values[2000000];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
  int n, i, x;

  while(scanf("%d", &x) && x){
	  for(i=0; i<x; i++){
		scanf("%d", &values[i]);
	  }
	  qsort (values, x, sizeof(int), compare); /* Built in function */

	  for (n=0; n<x; n++){
		if(n== x-1){
			printf("%d", values[n]);
		}
		else printf ("%d ", values[n]);

	  } printf("\n");
  }

  return 0;
}
