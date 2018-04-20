/* Date: 08.02.16
Problem:  10550 - Combination Lock
*/
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
#include <set>

#define SIZE 40000000
typedef long long ll;


using namespace std;

vector<char >vc;
vector<char >vc2;
set <char> sc;
set <char> ss;

string c;


int main(){

	int i, f, sec, third, total;

	while(scanf("%d %d %d %d", &i, &f, &sec, &third)){
		if(!i && !f && !sec && !third) break;
		total = 720;

		if(i<f)	{
			total += 9*((40 - f)+i);
		}
		else total += 9*(i - f);

		total += 360;

		if(f> sec) {
			total += 9*((40 - f)+sec);
		}
		else total += 9*(sec - f);

		if(sec < third) {
			total += 9*((40 - third)+sec);
		}
		else total += 9*(sec - third);

		cout << total << endl;

	}

	return 0;

}
