/* Date: 22.11.15
Problem: 10041 - Vito's Family
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
	return (*(int*) a - *(int*) b);
}

int main(){


	int j, n, i, t, m;
	int r[500], nr;
	long sum;

	scanf("%d", &t);

	while(t--){
		sum = 0;
		scanf("%d", &nr);

		for(j=0; j<nr; j++){
			scanf("%d", &r[j]);
		}
		if(nr %2==0){
			m= nr/2;
		}
		else m= (nr+1)/2;

		qsort(r, nr, sizeof(int), compare);

		for(i=0; i<nr; i++){
			if(r[m-1]== r[i]) continue;
			sum += abs(r[i]- r[m-1]);
		}
		printf("%ld\n", sum);

	}


	return 0;
}
