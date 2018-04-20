/* Date: 21.01.16
Problem: 10474 - Where is marbles ?
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

vector <int > v;

int main(){

	int i, n, q, num, x;
	int t = 0;
	while(scanf("%d %d", &n, &q) && n && q){
		v.clear();
	t++;
		for(i=0; i<n; i++){
			cin >> num;
			v.push_back(num);
		}
		sort(begin(v), end(v));
		printf("CASE# %d:\n", t);
		for(i=0; i<q; i++){
			cin >> num;
			x = -1;
			for(int j =0; j<n; j++){
				if(v[j]== num){
					x = j;
					break;
				}
				if(v[j]> num){
					x = -1;
					break;
				}
			}
			if(x>-1){
				printf("%d found at %d\n", num, x+1);
			}
			else printf("%d not found\n", num);
		}

	}

 return 0;
}
