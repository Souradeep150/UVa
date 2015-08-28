/* Date: 28.08.10
Problem: How old are you?
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
	int x=0, t;
	int bd, bm, by;
	int cd, cm, cy;
 
	scanf("%d", &t);
 
	while(t--){
 
	scanf("%d/%d/%d", &cd, &cm, &cy);
	scanf("%d/%d/%d", &bd, &bm, &by);
	x++;
 
	int year = cy-by;
 
	if(cm<bm) year--;
	else if(cm==bm){
		if(cd<bd) year--;
	}
 
	if(year<0){
		printf("Case #%d: Invalid birth date\n", x);
	}
	else if(year > 130){
		printf("Case #%d: Check birth date\n", x);
	}
	else printf("Case #%d: %d\n", x, year);
 
	}
	return 0;
}
