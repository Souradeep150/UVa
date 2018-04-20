/* Date: 5.04.16
Problem: 1225 - Digit Counting
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <sstream>
#include <map>

using namespace std;

string IntToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

map <int, int> m;

int main(){

	int n, i, b, p, x, t;
	string s;

	cin>> t;

	while(t--){
		m.clear();
		s = "";
		cin >> n;

		for(i=1; i<=n; i++){
			s += IntToString(i);
		}

		for(i=0; i<s.length(); i++){
			n = s[i] - '0';
			m[n]++;
		}

		for(i=0; i<10; i++){
			if(i == 9){
				cout << m[i];
				break;
			}
			cout << m[i] << " ";
		}
		cout << endl;

	}

	return 0;

}
