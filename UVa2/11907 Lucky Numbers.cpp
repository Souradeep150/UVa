/* Date: 15.01.16
Problem: 11907 Lucky Numbers
*/
#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE 1000000000

using namespace std;

vector<long long >v;
vector<long long> s;

void mul(){
	int i, x=1;
	v.push_back(0);
	for(i=1; ; i++){
		v.push_back(i*i);
		if(v[x] >= SIZE) break;
		x++;
	}
}



int main()
{
    long long a, b, n;
	int i,j,t;

	mul();

	cin>> t;
	for(j=1; j<=t; j++){
		cin >> n;
		s.erase(s.begin(), s.end());

		printf("Case %d: ", j);
		for(i=2; ; i++){

			if(v[i]>=n) break;

			if(n%i==0){
				a=n - v[i];
				if(a){
					s.push_back(a);
				}
			}
		}
		sort(s.begin(), s.end());
		for(i=0; i<s.size(); i++){
			printf("%lld ", s[i]);
		}
		printf("%lld\n", n-1);
	}
    return 0;
}
