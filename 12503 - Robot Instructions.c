/* Date: 24.08.15
Problem: 12503 - Robot Instructions
*/

#include<stdio.h>
#include <string.h>

int main()
{
	int t, i, x, tr;
	char s[100];
	int trac[100];

	scanf("%d", &t);

	while(t--){
		int p= 0;

		scanf("%d", &x);

		for(i=1; i<=x; i++){
			scanf("%s", &s);

			if(strcmp(s, "LEFT")==0){
				p--;
				trac[i]= -1;
			}
			else if(strcmp(s, "RIGHT")==0){
				p++;
				trac[i]= 1;
			}
			else{
				scanf("%s %d", &s, &tr); // string for AS
				p = p+trac[tr];
				trac[i]= trac[tr]; // assigning current command
			}

		}
			printf("%d\n", p);
	}

  return 0;
}
