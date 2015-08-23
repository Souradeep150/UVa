/* Date: 16.08.15
Problem: 12149 - Feynman
*/
#include<stdio.h>


int main()
{
    int num, i;


    while(scanf("%d", &num) && num){
		int ans=0;
		for(i=1; i<=num; i++){
			ans= ans+(i*i);
		}
		printf("%d\n", ans);
    }



    return 0;
}
