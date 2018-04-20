/* Date: 22.12.15
Problem: 573 - The Snail
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int h, d, f;
    float u;
    int i, day;

    while(1){
        scanf("%d %f %d %d", &h, &u, &d, &f);
        if(h==0) break;
        day = 1;
        float p = (float) (u*f)/100;

        float i = 0;
        float x = u;

        while(1){
            i = i+x;

			if(i > h){
				printf("success on day %d\n", day);
				break;
			}

            i = i-d;


            if(i<0){
                printf("failure on day %d\n", day);
                break;
            }

         //   c = c-p;
            x = x-p;
            if(x < 0){
				x=0;
            }

            day++;
        }

    }
    return 0;
}
