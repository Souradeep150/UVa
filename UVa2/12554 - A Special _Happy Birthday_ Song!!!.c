/* Date: 24.11.15
Problem: 12554 - A Special "Happy Birthday" Song!!!
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int t, g, i, j, l, m;
    int x=0, s;
    float k;
	char c[16][20]={
	"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you",
	"Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"

	};
	char n[100][100];
	s=0;
	x=0;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%s", &n[i]);
	}
	i=0;
	k = (float) t/16;
	k = ceil(k);

		for(j=0; j<k; j++){

			for(m=0; m<16; m++){
				if(i==t){
					i=0;
				}
				printf("%s: %s\n",n[i], c[m]);
				i++;
			}
		}

    return 0;
}
