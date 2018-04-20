/* Date: 05.04.16
Problem: 10879 - Code Refactoring
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <set>
#include <algorithm>

#define length 10000
#define long long ll

using namespace std;

typedef vector <int> IntContainer;
typedef IntContainer :: iterator IntIterator;

vector <int> v;

int prime[length];

void seive(){

	int i, j;
	for(i=3; i<sqrt(length); i+= 2){
		if( !prime[i]){
			for(j = i*i; j<length; j+= i+i){
				prime[j] = 1;
			}
		}
	}
	for(i=3; i<length; i+=2){
		if(!prime[i]){
			v.push_back(i);
		}
	}
}

int p = 2;


int main(){

	v.push_back(2);
	seive();
	int i, t, n, a, b, j;

	IntIterator x;

	cin >> t;
	for(i=1; i<=t; i++){
		p = 0;
		cin >> n;
		x = find(v.begin(), v.end(), n);
		printf("Case #%d: %d = ", i, n);

		if(x != v.end()){
			printf("%d * 1 = 31364 * 0\n", n);
		}
		else{
			for(j = 2; j<n; j++){
				if(n%j == 0){
					a = j;
					break;
				}
			}
			if(j == n){ a = n; }
			for(j++; j<n; j++){
				if(n%j == 0){
					b = j;
					break;
				}
			}
			if(j == n){ b = n; }

			printf("%d * %d = %d * %d\n", a, n/a, b, n/b);
		}
	}
	return 0;
}
