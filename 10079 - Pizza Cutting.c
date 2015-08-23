/* Date: 22.08.15
Problem: 10079 Pizza cutting
*/
#include <stdio.h>
 
 
int main()
{
 
	long int res, n;
 
	while(scanf("%ld", &n) && n>=0){
		res= (n*(n+1)/2)+1;
		printf("%ld\n", res);
	}
 
    return 0;
}
 
