/* Date: 25.08.15
Problem: 10340 All in All
*/

#include <stdio.h>
#include <string.h>

int main(){

	int i, t, j, n=0;
	char b[100000], a[100000];


	while(scanf("%s %s", &a, &b) != EOF){

		t =0;
		n =0;
		for(i=0; i<strlen(a); i++){

			for(j=n; j<strlen(b); j++){
				if(a[i]==b[j]) {
					n=j+1;
					t++;
					break;
				}
			}
		}
		if(t==i){ printf("Yes\n");}
		else printf("No\n");
	}

	return 0;
}
