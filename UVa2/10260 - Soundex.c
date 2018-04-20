/* Date: 20.11.15
Problem: 10260 - Soundex
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>


void swap(int *i, int *j) {
   int t = *i;
   *i = *j;
   *j = t;
}

int main()
{
    int t, i, j, k, l, m, p;
    int x, xx=0;
    char c[100];

	while(scanf("%s", c)==1){
        for(i=0; i<strlen(c); i++){

			if(c[i]=='B' || c[i]== 'F' || c[i]== 'P' || c[i]== 'V'){
				if(c[i+1]=='B' || c[i+1]== 'F' || c[i+1]== 'P' || c[i+1]== 'V') continue;
				printf("1");
			}

			else if(c[i]=='C' || c[i]== 'G' || c[i]== 'J' || c[i]== 'K'|| c[i]== 'Q' || c[i]=='S' || c[i]== 'X'|| c[i]== 'Z'){
				if(c[i+1]=='C' || c[i+1]== 'G' || c[i+1]== 'J' || c[i+1]== 'K'|| c[i+1]== 'Q' || c[i+1]=='S' || c[i+1]== 'X'|| c[i+1]== 'Z') continue;
				printf("2");
			}
			else if(c[i]=='D' || c[i]== 'T'){
				if(c[i+1]=='D' || c[i+1]== 'T') continue;
				printf("3");
			}
			else if(c[i]== 'L'){
				if(c[i+1]=='L') continue;
				printf("4");
			}
			else if(c[i]== 'M' || c[i]== 'N'){
				if(c[i+1]=='M' || c[i+1]== 'N') continue;
				printf("5");
			}
			else if(c[i]== 'R'){
				if(c[i+1]=='R') continue;
				printf("6");
			}
			else continue;

        } printf("\n");
	}

    return 0;
}
