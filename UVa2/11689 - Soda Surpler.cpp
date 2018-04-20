/* Date: 4.04.16
Problem: 11689 - Soda Surpler
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


int main(){

	int t, n, i, x, r, p;
	int total;

	cin >> t;
	while(t--){
		total = 0;

		cin >> n >> p >> r;
		n += p;

		while(1){
			total += n/r;
			n = (n/r) + (n%r);
			if(n<r) break;
		}
		cout << total << endl;
	}

	return 0;
}
