/* Language: C
Problem: Uva  10346 - Peter's Smokes
*/

#include <stdio.h>

int main(){
    int y,i, x;
    int n, k, p;

    while(scanf("%d %d", &n, &k) != EOF){
        int all= n;

        for(i=0; ; i++){
			x= n/k;
			all = all+x;
			x+=(n%k);
			if(x<k){
				break;
			}
			n=x;
        }
        printf("%d\n", all);
    }

return 0;
}
