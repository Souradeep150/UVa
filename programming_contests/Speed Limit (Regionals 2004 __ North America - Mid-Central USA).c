/* Date: 04.10.15
Problem: Speed Limit (Regionals 2004 >> North America - Mid-Central USA)
*/

#include<stdio.h>

int main()
{
	int input[100], a, time[100];
	int i, x, n, t, j;

	while(1){
		x = 0;
		int sum = 0;
		scanf("%d", &t);
		if(t == -1){
			return 0;
		}
		for (i=0; i<t ; i++){
			scanf ("%d %d", &input[i], &time[i]);

		}

		for (a=t-1; a >= 0; a--){
			if(a==0){
				sum= sum + (time[a] * input[a]);
			}
			else sum= sum + ((time[a]- time[a-1]) * input[a]);
		}
		printf("%d miles\n", sum);

	}

  return 0;
}
