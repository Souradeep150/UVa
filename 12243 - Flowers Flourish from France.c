/* Date: 14.08.15
Problem : 12243 - Flowers Flourish from France
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
	char s[2000], c;
	int t, l, i, y, x;
 
 
 
	for(t=0; ; t++){
 
		gets(s);
 
		if(s[0]=='*') break;
		c = s[0];
		l = strlen(s);
		y=0;
		x=0;
 
		for(i=1; i<l; i++){
			if(s[i]== ' '){
				y++;
				if(c >= 'A' && c<= 'Z'){
					if(s[i+1]==c || s[i+1]== c+32){
						x++;
					}
				}
				else if(s[i+1]==c || s[i+1]== c-32){
					x++;
				}
			}
		}
		if(y!=x) printf("N\n");
		else printf("Y\n");
	}
 
	return 0;
}
