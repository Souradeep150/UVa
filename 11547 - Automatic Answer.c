/* Date: 26.08.15
Problem: 11547 - Automatic Answer
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{

	int i, x=0, n, j;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &i);
		i= (i*567)/9;
		i= i+7492;
		i= (i*235)/47;
		i= i-498;
		for(j=0; j<1; j++){
			x = i/10;
			x = x%10;
		}
		if(i<0){
			printf("%d\n", abs(x));
		}
		else printf("%d\n", x);
	}

  return 0;
}
