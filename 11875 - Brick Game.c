/* Date: 05.08.15
Problem: 11875 - Brick Game
*/
 
#include <stdio.h>
 
int main()
{
    int t, j, x[11], n, i;
 
    scanf("%d", &t);
    for(j=1; j<=t; j++){
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            scanf("%d", &x[i]);
        }
        switch(n){
        case 3: printf("Case %d: %d\n", j, x[2]); break;
        case 5: printf("Case %d: %d\n", j, x[3]); break;
        case 7: printf("Case %d: %d\n", j, x[4]); break;
        case 9: printf("Case %d: %d\n", j, x[5]); break;
        }
    }
 
	return 0;
}
