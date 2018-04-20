/* Date: 3.04.16
Problem: 10050 - Hartals
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <set>
#include <algorithm>
 
using namespace std;

set <int > s;
 
int main(){
 
	int t, n, i, x, j, p;
	int day;
 
	cin >> t;
 
	while(t--){
		s.clear();
		cin>> n >> p;
 
		for(i=0; i<p; i++){
			cin>> x;
			day = x;
 
			for(j=0; ; j++){
				if(day>n) break;
				s.insert(day);
				day += x;
			}
		}
		day = 6;
		x = 7;
		for(i=0; ; i++){
			if(day > n) break;
 
			s.erase(day);
			s.erase(x);
			day += 7;
			x += 7;
		}
		cout << s.size() << endl;

	}
	return 0;
}
 
