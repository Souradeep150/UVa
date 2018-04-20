/* Date: 10.03.16
Problem: 278 - Chess
*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <string.h>
#include <vector>
#include <set>
#include <cmath>

#define ll long long

using namespace std;


int main() {

	int row, colm;
	int t, i, r;

	char c;

	cin >> t;
	while(t--){
		cin>> c>> row >> colm;
		if(c == 'r'){
			cout << row<< endl;
		}
		else if(c== 'k'){
			i = ceil((float)(row*colm)/2);
			cout << i << endl;
		}
		else if(c == 'Q'){
			i = min(row, colm);
			cout << i << endl;
		}
		else if(c== 'K'){
			i = ceil((float)row/2);
			r = ceil((float)colm/2);

			cout << r*i<< endl;
		}

	}
    return 0;
}

