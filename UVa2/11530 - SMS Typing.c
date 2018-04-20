/* Date: 06.09.15
Problem: 11530 - SMS Typing
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char c[102];
	int a, b=1, t, i;

	scanf("%d", &t);
	getchar();

	for( ; b<=t; b++){
		int sum=0;
		gets(c);

		for(i=0; i<strlen(c); i++){

			switch(c[i]){
				case 'a': sum= sum+1; break;
				case 'b': sum= sum+2; break;
				case 'c': sum= sum+3; break;
				case 'd': sum= sum+1; break;
				case 'e': sum= sum+2; break;
				case 'f': sum= sum+3; break;
				case 'g': sum= sum+1; break;
				case 'h': sum= sum+2; break;
				case 'i': sum= sum+3; break;
				case 'j': sum= sum+1; break;
				case 'k': sum= sum+2; break;
				case 'l': sum= sum+3; break;
				case 'm': sum= sum+1; break;
				case 'n': sum= sum+2; break;
				case 'o': sum= sum+3; break;

				case 'p': sum= sum+1; break;
				case 'q': sum= sum+2; break;
				case 'r': sum= sum+3; break;
				case 's': sum= sum+4; break;
				case 't': sum= sum+1; break;
				case 'u': sum= sum+2; break;
				case 'v': sum= sum+3; break;

				case 'w': sum= sum+1; break;
				case 'x': sum= sum+2; break;
				case 'y': sum= sum+3; break;
				case 'z': sum= sum+4; break;

				case ' ': sum= sum+1; break;
			}
		} printf("Case #%d: %d\n", b, sum);
	}
    return 0;
}
