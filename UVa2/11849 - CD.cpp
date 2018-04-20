/* Date: 09.03.16
Problem: 11849 - CD
*/
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <string.h>
#include <vector>
#include <set>

using namespace std;

map <int, int> data;
map <int, int> rData;

vector<long long> s;

int main() {

    long long jack, jill;
    long long i, n,m, j, same;

    while(scanf("%lld %lld", &jack, &jill)){
		same = 0;
		s.clear();

		if(jack== 0 && jill==0) break;

		for(i=0; i<jack; i++){
			cin >> n;
			s.push_back(n);
		}
		j = 0;

		for(i=0; i<jill; i++){
			cin >> n;
			for( ; ; j++){
				if(i>= s.size() || j>= s.size()) break;
				if(n < s[j]){
					break;
				}
				else if(n== s[j]){
					same++;
					break;
				}

			}
		}

		cout << same<< endl;

    }

    return 0;
}
