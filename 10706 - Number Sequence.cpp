#include<bits/stdc++.h>
 
using namespace std;
 
int main(){

	int a, i, tc, n;
	string s, res="";
  
	n = 1;
	while(1){
		if(res.length() >= 2147483647) break;
 
		s += to_string(n);
		res += s;
		n++;
	}
 
	scanf("%d", &tc);
	while(tc--){
 
		scanf("%d", &a);
		//cout << res << endl;
		printf("%c\n", res[a-1]);
	}
	return 0;
}
 
