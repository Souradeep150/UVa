/* Date: 09.02.16
Problem: 11586 - Train Tracks
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

	int f, m, t, i;
	string c;

	scanf("%d", &t);
	getchar();

	while(t--){
		f = m = 0;
		getline(cin, c);

		for(i=0; i<c.length(); i++){
			if(c[i]== 'M' && c[i+1]== 'M'){
				m++;
				i++;
			}
			if(c[i]== 'F' && c[i+1]== 'F'){
				f++;
				i++;
			}
		}

		if(m==f && c.length()> 2){
			cout << "LOOP" << endl;
		}
		else cout << "NO LOOP" << endl;
	}
	
	return 0;
	
}
