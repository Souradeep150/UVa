/* Date: 14.08.15
Problem : 494 - Kindergarten Counting Game
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000];
	int word, l, i;
	char e = '\0';

	while(gets(s)){
		word=0;
		l=1;

		for(i=0; i<=strlen(s); i++){

			if((s[i]>= 'A' && s[i]<='Z')||(s[i]>= 'a' && s[i]<= 'z')){
				if(l)
				word++;
				l=0;
			}
			else l=1;

		} printf("%d\n", word);

	}

	return 0;
}
