/* Date: 18.08.15
Problem: 11614 -Etruscan Warriors Never Play Chess
*/
#include<stdio.h>

int main()
{
	long long input;
	int i=0, x, t;
	long long maxi, n;

	scanf("%d", &t);

	for(i=0; i<t; i++){
		maxi = 1;
		n = 0;
		scanf("%lld", &input);
		for(x=2; ; x++){
			if(input==0){
				n=0;
				break;
			}
			if(input<3){
				n=1;
				break;
			}
			if(maxi>input){
				break;
			}
			maxi= maxi+x;
			n++;
		} printf("%lld\n", n);
	}

return 0;
}
