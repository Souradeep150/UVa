/* Date: 21.01.16
Problem: 12032 - The Monkey and the Oiled Bamboo
*/
#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
#define SIZE 10000000
 
using namespace std;
 
vector <int > v;
 
int main(){
 
	int j, i, n, m, p, k, t, x;
 
	int maxx;
 
	scanf("%d", &t);
	for(j = 1; j<=t; j++){
		cin >> n;
		x = 0;
		v.clear();
 
		for(i=0; i<n; i++){
			cin >> m;
			v.push_back(m);
			if(i==0){
				maxx = v[0];
			}
			else{
				x = abs(v[i] - v[i-1]);
			}
			if(maxx < x){
				maxx = x;
			}
 
		}
		k = maxx;
 
		for(i=0; i<v.size(); i++){
			if(i==0){
				x = v[0];
			}
			else{
				x = v[i] - v[i-1];
			}
			if(x == k){
				k--;
			}
			else if(k < x){
				maxx++;
				break;
			}
 
		}
 
		printf("Case %d: %d\n", j, maxx);
	}
 
 return 0;
}
 
