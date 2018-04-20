/* Date: 24.08.15
Problem: One two three
*/
 
#include<stdio.h>
#include <string.h>
 
int main()
{
	int t, i, on=0;
	char n[10];
 
	scanf("%d", &t);
 
	while(t--){
		scanf("%s", &n);
 
		if(strlen(n)>3){
			printf("3\n");
			continue;
		}
		if(n[0]== 'o') on++;
		if(n[1]== 'n') on++;
		if(n[2]== 'e') on++;
		if(on>= 2){
			printf("1\n");
			continue;
		}
		else{
			printf("2\n");
			continue;
		}
	}
 
  return 0;
}
 
