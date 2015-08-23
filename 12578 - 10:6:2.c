/* Date: 16.08.15
Problem: 12578 - 10:6:2
*/
#include<stdio.h>
 
#define PI acos(-1)
 
 
int main()
{
	int L, t, i;
	double arr, div;
 
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &L);
 
		arr= (125663.71*L*L)/1000000;
		div= (474336.29*L*L)/1000000;
		printf("%.2f %.2f\n", arr, div );
 
	}
 
 
    return 0;
}
