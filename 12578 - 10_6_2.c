/* Date: 16.08.15
Problem: 12578 - 10:6:2
*/
#include<stdio.h>

#define PI acos(-1)


int main()
{
	int t, i;
	double L, w, r;
	double ac, div;

	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%lf", &L);
	w = 6*L/10;
	r= L/5;
	ac= PI*r*r;
	/* My concept was
	ac= (125663.71*L*L)/1000000;
	di= (474336.29*L*L)/1000000;
	*/
		printf("%.2f %.2f\n", ac, w*L-ac );

	}


    return 0;
}
