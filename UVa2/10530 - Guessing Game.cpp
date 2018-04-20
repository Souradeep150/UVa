/* Date: 10.02.16
Problem: 10530 - Guessing Game
*/
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
#define SIZE 100000000

using namespace std;

int m, w;

int high(int z){

	if(z < m){
		m = z;
	}
	return m;
}
int low(int z){

	if(z > w){
		w = z;
	}
	return w;
}

int main(){
	int i;
	char a[10], c[10];

	int hi=11, lo=0, t, n;

	m = 10, w = 1;

	while (scanf("%d", &n) && n){

		scanf("%s %s", &a, &c);

		if(strcmp(c, "low")==0){
			lo = low(n);
		}
		else if(strcmp(c, "high")==0){
			hi = high(n);
		}
		else if(strcmp(c, "on")==0){
			m = 10;
			w = 1;
			if(n > lo && n < hi){
				cout << "Stan may be honest" << endl;
			}
			else{
				cout << "Stan is dishonest" << endl;
			}
				hi=11, lo=0;
		}

	}
	return 0;
}
