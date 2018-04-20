/* Date: 04.10.15
Problem: Doubles (Regionals 2003 >> North America - Mid-Central USA)
*/

#include<stdio.h>

int main()
{
	int input[1000], a;
	int i, x, n, j;

	while(1){
		x = 0;
		n = 0;

		for (i=0; ; i++){
			scanf ("%d", &input[i]);
			if(input[0] == -1){
				return 0;
			}
			if(input[i]== 0){
				break;
			}
			x++;
		}

		for (a=0; a<x; a++){
			for(j=0; j<x; j++){
				if(input[a] == input[j]){
					continue;
				}
				if(input[a]*2 == input[j]){
					n++;
				}
			}
		}
		printf("%d\n", n);

	}

  return 0;
}
