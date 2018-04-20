/* Date: 07.09.15
Problem: F - Nth Largest Value ( Contest hust.edu.cn )
*/

#include <stdio.h>


int main()
{
	int n, i, t, x;
	int num[10];

	scanf("%d", &t);
	while(t--){
		scanf("%d", &x);

		for(i=0; i<10; i++){
			scanf("%d", &num[i]);
		}
		for(i=0; i<10; i++){
			for(n=i+1; n<10; n++){
				if(num[i]> num[n]){
					int temp = num[i];
					num[i]= num[n];
					num[n]= temp;
				}
			}
		}
		printf("%d %d\n", x, num[7]); /* largest 3rd value */
	}

return 0;
}
