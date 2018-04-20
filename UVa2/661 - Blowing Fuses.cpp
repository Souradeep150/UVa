/* Date: 08.02.16
Problem:  661 - Blowing Fuses
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


int ope[30];

int main(){

	int n, m, t, c, i, x, total, cap[30];
	int high, s = 0;

	while(scanf("%d %d %d", &n, &m, &c) && n && m && c){

		s++;
		t = 1;
		total = 0;
		high = 0;

		for(i=1; i<=n; i++){
			scanf("%d", &cap[i]);
		}

		for(i=1; i<=m; i++){
			scanf("%d", &x);
			if(ope[x]== 0){
				total += cap[x];
				ope[x]= 1;
			}
			else {
				total = total - cap[x];
				ope[x]= 0;
			}
			if(total > c){
				t = 0;
			}
			if(total > high){
				high = total;
			}

		}
		if(t){
			printf("Sequence %d\n", s);
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n", high);
		}
		else {
			printf("Sequence %d\n", s);
			printf("Fuse was blown.\n");
		}
		printf("\n");
		for(i=1; i<=20; i++){
			ope[i]= 0;
		}
	}
	return 0;

}
