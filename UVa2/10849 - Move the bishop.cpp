/* Date: 15.03.16
Problem: 10849 - Move the bishop
*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <string.h>
#include <vector>
#include <set>

#define ll long long

using namespace std;

map <char, int> data;
map <char, int> record;
vector<int> v;

int main() {

	ll x, y, x2, y2, a, b;
	ll n, t, board;

	cin>> t;
	while(t--){
		cin >> n;
		cin >> board;
		for(int i=0; i<n; i++){
			cin >> x>> y>> x2>> y2;
			a = abs(x - x2);
			b = abs(y - y2);
			if(a==0 && b==0){
				cout << 0 << endl;
			}
			else if(a==b){
				cout << 1 << endl;
			}
			else if((x+y) %2==0 && (x2+y2)%2 != 0){
				cout << "no move"<< endl;
			}
			else if((x2+y2) %2==0 && (x+y)%2 != 0){
				cout << "no move"<< endl;
			}
			else cout << 2 << endl;
		}
	}
    return 0;
}

