/* Date: 03.09.15
Problem: Humble Number
*/
#include <stdio.h>

long long humb[6000];

void humble(){
	long long i, n, x;
	int c=2;
	humb[1]=1;
	for(i=2; i<=200000000; i++){
		n= i;
		x= n;
		while(n%2==0){
			n= n/2;
		}
		while(n%3==0){
			n= n/3;
		}
		while(n%5==0){
			n= n/5;
		}
		while(n%7==0){
			n= n/7;
		}
		if(n==1){
			humb[c]= x;
			c++;
		}
		else continue;
	}
}


int main(){
	int n;

	humble();

	while(scanf("%d", &n) && n){

		printf("The %d", n);
		if(n==11 || n== 12 || n==13){
			printf("th ");
		}
		else {
			if(n%10==1){
				printf("st ");
			}
			else if(n%10==2){
				printf("nd ");
			}
			else if(n%10==3){
				printf("rd ");
			}
			else printf("th ");
		}

	printf("humble number is %lld.\n", humb[n]);

	}

	return 0;
}
