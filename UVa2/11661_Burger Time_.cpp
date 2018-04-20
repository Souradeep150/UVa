/* Date: 09.02.16
Problem: 11661	Burger Time?
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

int main(){

	int r, s, h, t, i, d, dis;
	string c;




	while(scanf("%d", &t) && t){
		getchar();
		r=d=0;
		int temp = 10000000;
		dis = 0;
		h = 1;

		getline(cin, c);

		for(i=0; i<t; i++){
			if(c[i]== 'Z'){
				h = 0;
				break;
			}
			if(c[i]== 'R'){
				r = i+1;
			}
			if(c[i]== 'D'){
				d = i+1;
			}
			if(r && d){
			dis =	abs(r - d);
				if(dis<temp){
					temp = dis;
				}
			}

		}
		if(!h){
			printf("0\n");
		}
		else printf("%d\n", temp);

	}
	
	return 0;

}
