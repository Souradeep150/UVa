/* Date: 09.03.16
Problem: 484 - The Department of Redundancy Department
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

vector <int> v;

int main() {
    int n, x, total = 0;


	while(cin>> n){

		if(rData[n] != 1){
			data[n]++;
			v.push_back(n);
			rData[n] = 1;
		}
		else data[n]++;
	}

	for(int i=0; i<v.size(); i++){
		cout << v[i] << " "<< data[v[i]] << endl;
	}

    return 0;
}
