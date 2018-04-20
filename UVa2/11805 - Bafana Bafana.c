/* Date: 30.12.15
Problem: 11805 - Bafana Bafana
*/
#include <stdio.h>

int main(){
	int i, x=0, n, p, k;
	int t;
	
	scanf("%d", &t);
	while(t--){
		x++;
		scanf("%d %d %d", &n, &k, &p);
		if(n==p) {printf("Case %d: %d\n", x, k); continue;}
		
		for(i=1; i<=p ; i++){
			if(k==n){k=0;}
			k++;
		}
		
		printf("Case %d: %d\n",x, k);
	}
	return 0;
}
