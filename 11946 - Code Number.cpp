/* Date: 09.11.15
Problem: 11946 - Code Number

*/
#include <bits/stdc++.h>

using namespace std;


int main(){

	int a, b, tc, s;
	char ss[100];

	cin >> tc;
	getchar();

	while(tc--){

		while(gets(ss) && gets != '\0') {
		string sc = ss;


		for(int i = 0; i<sc.length(); i++){
			if(ss[i] == '0'){
				cout << "O";
			}
			else if(ss[i]== '1'){
				cout << "I";
			}
			else if(ss[i]== '2'){
				cout << "Z";
			}
			else if(ss[i]== '3'){
				cout << "E";
			}
			else if(ss[i]== '4'){
				cout << "A";
			}
			else if(ss[i]== '5'){
				cout << "S";
			}
			else if(ss[i]== '6'){
				cout << "G";
			}
			else if(ss[i]== '7'){
				cout << "T";
			}
			else if(ss[i]== '8'){
				cout << "B";
			}
			else if(ss[i]== '9'){
				cout << "P";
			}
			else cout << ss[i];
		}
		cout << endl;
		}

	}

	return 0;
}
