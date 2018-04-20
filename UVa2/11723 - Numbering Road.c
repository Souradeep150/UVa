/* Date: 02.01.16 
Problem: 11723 Numbering road
*/
#include <stdio.h>

int main(){
	int i, n,r, t;
	

	for(i=1; ; i++){
		scanf("%d %d", &r, &n);
		if(r==0 && n==0) break;
		int x = r/n;
		
		if(x<=26){
			if(r%n==0){
				printf("Case %d: %d\n", i, x-1);
			}
			else printf("Case %d: %d\n", i, x);
		}
		else printf("Case %d: impossible\n", i);
	}
	return 0;
}
