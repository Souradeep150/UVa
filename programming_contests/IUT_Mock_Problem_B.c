/* Date: 05.09.15
Problem: Problem B (Sequence of Numbers)
*/
#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
	int num[100];
	int n, i, t;
	scanf("%d", &t);
 
	while(t--){
 
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	int temp = num[0]- num[1];
	int temp2 = num[1]- num[2];
 
	if(temp<0){
		if(temp==temp2){
			printf("%d\n", num[n-1]+abs(temp));
		}
		else{
			int ex = num[1]/num[0];
			printf("%d\n", num[n-1]*ex);
		}
	}
	else {
		if(temp==temp2){
			printf("%d\n", num[n-1]- temp);
		}
		else {
			int ex= num[0]/num[1];
			printf("%d\n", num[n-1]/ex);
		}
	}
	}
 
	return 0;
}
 
