/* Date: 17.11.15
Problem: 10035 - Primary Arithmetic
*/
 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int arr[100];
 
int main()
{
    int t=0, i,  k, l, n, m;
    char c[100];
	char b[100];
while(scanf("%s %s", b, c)){
 
 if(b[0]== '0' && c[0]=='0') break;
    int bb = strlen(b);
    int cc = strlen(c);
t=0;
n=0;
    if(bb > cc){
        for(i= cc-1; i> -1; i--){
            l = c[i]- '0';
            bb--;
            for(m=bb; m>bb-1; m--){
                k = b[m]- '0';
                t = t+(k+l);
 
                if(t>9){
                    t/=10;
                    n++;
                }
                else {
 
                    t=0;
                }
            }
 
        }
        bb--;
        if(t != 0){
            for(m=bb; m> -1; m--){
                k = b[m]- '0';
                t = t+k;
                if(t>9){
                    t/=10;
                    n++;
                }
                else {
 
                    t=0;
                }
            }
        }
    }
    else{
        for(i= bb-1; i> -1; i--){
            l = b[i]- '0';
            cc--;
            for(m=cc; m>cc-1; m--){
                k = c[m]- '0';
                t = t+(k+l);
 
                if(t>9){
                    t/=10;
                    n++;
                }
                else {
 
                    t=0;
                }
            }
 
        }
        cc--;
        if(t != 0){
            for(m=cc; m> -1; m--){
                k = c[m]- '0';
                t = t+k;
                if(t>9){
                    t/=10;
                    n++;
                }
                else {
 
                    t=0;
                }
            }
        }
    }
    if(n==0){
        printf("No carry operation.\n");
    }
    else if (n==1){
        printf("1 carry operation.\n");
    }
    else printf("%d carry operations.\n", n);
    }
 
    return 0;
}
