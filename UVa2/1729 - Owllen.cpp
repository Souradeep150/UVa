/* Date: 14.02.16
Problem: 1729 - Owllen
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

map <char, int> m;

int main(){

	int j, i, n, p, k, t, x;
	string s;

	scanf("%d", &n);
	map<char, int> :: iterator it;

	for(j = 1; j<=n; j++){
		m.clear();
		cin >> s;

		for(i=0; i<s.length(); i++){
			m[s[i]]++;
		}
		x = 100001;
		it = m.begin();

		for(i=0; i<26; i++ ){
			p = it->second;
			if(p < x){
				x = p;
			}
			it++;

		}
		cout <<"Case "<<j<<": "<< x << endl;
	}

 return 0;
}
