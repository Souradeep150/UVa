/* Date: 07.10.15
Problem: Class Statistics (Regionals 2011 >> South Pacific)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input[1000], a, cons[100];
	int i, x=1, n, t, j, tt;

	scanf("%d", &t);
	while(t--){

		scanf("%d", &tt);

		for(i=0; i<tt; i++){
			scanf("%d", &input[i]);
		}

		for (i=1; i<tt; i++){
			for(j=0; j<tt-1; j++){

				if(input[j]>input[j+1]){
					int temp= input[j];
					input[j]= input[j+1];
					input[j+1]= temp;
				}
			}
		}

		for(i=tt-1; i> 0; i--){
			cons[i]= input[i] - input[i-1];
		}
		for(i=1; i<tt; i++){
			if(cons[1]<cons[i]){
				cons[1]= cons[i];
			}
		}

		int large = input[tt-1];

		int small = input[0];

		printf("Class %d\n", x);
		printf("Max %d, Min %d, Largest gap %d\n", large, small, cons[1]);
		x++;
	}

  return 0;
}
