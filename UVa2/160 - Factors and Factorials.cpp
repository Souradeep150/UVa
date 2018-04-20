/* Date: 02.06.16
Problem: 160 - Factors and Factorials 
 
*/
#include <bits/stdc++.h>
 
using namespace std;
 
vector < int > v;
map <int, int> myMap;
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
 
void factor(int m){
 
	for(int l = 0;  ; l++){
 
		if(m % v[l] == 0){
 
			while(m % v[l] == 0){
				m /= v[l];
				myMap[v[l]]++;
			}
		}
		if(l > m) break;
 
	}
	if(m != 1) myMap[m]++;
 
 
}
 
int main(){
 
	seive();
	int n, i, x;
 
	while(scanf("%d", &n) && n){
		myMap.clear();
		x = 0;
		for(i=2; i <= n; i++){
			factor(i);
		}
		cout << setw(3)<< n <<"! =";
 
		map<int, int> ::iterator it;
		for(it = myMap.begin(); it != myMap.end(); it++){
			x++;
			cout<<setw(3)<< it->second;
			if(x != myMap.size() && x%15 == 0){
				cout << endl;
				cout <<"      ";
			}
		}
		 cout << endl;
	}
 
	return 0;
}
 
