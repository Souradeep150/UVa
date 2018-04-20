/* Date: 13.11.15
Problem: 10008 - What's Cryptanalysis?
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int arr[100];

int main()
{
    int t, i, j, k, l, max=0;
    char c[500];

    scanf("%d",&t);
    getchar();

    for(i=0; i<t; i++){
        gets(c);

        for(j='A'; j<='Z'; j++)
        {
            for(l=0; c[l]!='\0'; l++)
            {
                if(toupper(c[l])==j)
                    arr[j]++;
            }
            if(arr[j]>max)
                max = arr[j];
        }
    }

    for(i=max; i>0; i--){

        for(j='A'; j<='Z'; j++)
        {
            if(arr[j]==i)
                printf("%c %d\n",j,i);
        }
    }
    return 0;
}
