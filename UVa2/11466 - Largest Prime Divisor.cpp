/* Date: 21.01.16
Problem:  11466 - Largest Prime Divisor
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define SIZE 40000000

using namespace std;

vector<long long >v;
set <long long > s;


long prime[SIZE];

void sieve()
{
	int i, M;

	for(i=3; i<sqrt(SIZE); i++){

		if(!prime[i]){
			for(M=i*i; M<SIZE; M+=i){
				prime[M]=1;
			}
		}
	}
	for(i=3; i<SIZE; i+=2){
		if(!prime[i]){
			v.push_back(i);
		}
	}

}

int main(){

	v.push_back(2);
	sieve();
	long long i,j,t;

	while(scanf("%lld", &t) && t){
	int p =1;
	long long ans = t;
	s.clear();

	if(t<0) t = abs(t);
	if(t==1){printf("-1\n"); continue;}

	long long ma = -1;

	for(i=0; i<v.size(); i++){

		if(t%v[i]==0){
			ma = max(ma, v[i]);

			s.insert(v[i]);
			while(t%v[i]==0){
				t=t/v[i];
			}
		}
		if(v[i]*v[i]>t){
			break;
		}

		}

		if(t>1){
			s.insert(t);
			ma = max(ma, t);
		}
	
		if(s.size()==1){
			ma = -1;
		}
		printf("%lld\n", ma);
	}

	return 0;

}
