/* Date: 09.11.15
Problem: 11064 - Number Theory

*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

vector < int > v;
#define N 50000
int prime[N+1];

void seive(){
	int i, j;
	v.push_back(2);

	for(i=3; i<sqrt(N); i+=2){
		if(!prime[i]){
			for(j= i*2; j <= N; j+=i){
				prime[j]= 1;
			}
		}
	}
	for(i=3; i<=N; i+=2){
		if(!prime[i]){
			v.push_back(i);
		}
	}
}

int main(){

	long long i, t=0, n,p;

	seive();

	while(scanf("%lld", &n) != EOF){
		p=n;
		if(n==1){
			cout<< 0 << endl;
			continue;
		}
		long long counter=0,sum=1,sum1=n;

		for(i=0;i<v.size(); i++){

			 if(v[i]*v[i]>n){
				break;
			 }

			if(n%v[i]==0){

				counter=0;
				sum1=sum1*(v[i]-1);
				sum1=sum1/v[i];
				while(n%v[i]==0)
				{
					n=n/v[i];
					counter++;
				}
				counter=counter+1;
				sum=sum*counter;

			}

		}
		if(n>1){

			sum=sum*2;
			sum1=sum1*(n-1);
			sum1=sum1/n;
		}
	cout << p-(sum+sum1)+1<<"\n";
	}

	return 0;
}
