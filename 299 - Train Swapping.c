/* Date: 24.08.15
Problem: 299 - Train Swapping
*/

#include<stdio.h>

int main()
{
	int input[50], a;
	int i, x, n, I, j;

	scanf("%d", &n);

	while(n--){

		scanf("%d", &I);
		x=0;
		for (i=0; i<I; i++){
			scanf ("%d", &input[i]);
		}

		for (a=0; a<I; a++){
			for(j=a+1; j<I; j++){

				if(input[a]>input[j]){
					int temp= input[a];
					input[a]= input[j];
					input[j]= temp;
					x++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", x);

	}

  return 0;
}
