/* Date: 6.09.15
Problem: 11479 - Is this the easiest problem?
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int x=0, i, s, t;
	long a, b, c;
	scanf("%d", &t);

	while(t--){
		x++;
		scanf("%ld %ld %ld", &a, &b, &c);
		if(a+b <= c || a+c<= b || b+c <= a){
			printf("Case %d: Invalid\n", x);
		}
		else if(a==b && b==c){
			printf("Case %d: Equilateral\n", x);
		}
		else if(a==b || b==c || a==c){
			printf("Case %d: Isosceles\n", x);
		}

		else printf("Case %d: Scalene\n", x);
	}
	return 0;
}
