/* Date: 15.09.15
Problem: 10424 - Love Calculator
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

#define size 100
#define LL long long

int sumd(int n){
	int x=0;

	if(n<10){
		return n;
	}
	for(; ;){

		if(n<100){
			x= x+ (n%10);
			x= x+ (n/10);
			if(x>9) return sumd(x);
			else{ return x;}

		}
		else{
			x= x+ (n%10);
			n= n/10;
		}
	}

}


int main()
{

	int l,  i, a, d, t, n;
	int sum=0, sum1;
	char c[30], b[30];

	while(gets(c)){

		gets(b);

		sum = 0;
		for(i=0;i<strlen(c);i++){

				if(c[i]>='a'&& c[i]<='z')
					sum+= c[i]-96;
				else if(c[i]>='A'&& c[i]<='Z')
					sum+= c[i]-64;
		}

		sum1 = 0;
		for(i=0;i<strlen(b);i++){

			if(b[i]>='a'&& b[i]<='z')
				sum1+= b[i]-96;
			else if(b[i]>='A'&& b[i]<='Z')
				sum1+= b[i]-64;
		}


		sum1 = sumd(sum1);
		sum = sumd(sum);
		if(sum1>sum){
			float res = (float)sum/(float)sum1;
			printf("%.2f %%\n", res*100.0);
		}
		else {
			float res = (float)sum1/(float)sum;
			printf("%.2f %%\n", res*100.0);
		}
	}


	return 0;
}
