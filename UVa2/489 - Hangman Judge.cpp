 /* Date: 07.02.16
 Problem: 489 - Hangman Judge
 */
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include<map>
#include <algorithm>
#include <set>

#define SIZE 40000000
typedef long long ll;


using namespace std;

vector<char >vc;
vector<char >vc2;
set <char> sc;
set <char> ss;
map<char,int>s3;
string c;


int main(){

	string s;
	int i, b, n, x, j,check;


	while(cin>>n){
		x=0;
		check=0;
		int t;
		ss.clear();
		vc.clear();
		s3.clear();

		
		if(n == -1){
			break;
		}
		getchar();
		cin >> s;
		cin >> c;

		int p =0;
		int l = c.length();

		vector<char>::iterator it2;
		set<char>::iterator it;

		for(i=0; i<s.length(); i++){
			ss.insert(s[i]);
		}
		for(i=0; i<c.length(); i++){
			if(s3[c[i]]==0)
			{
			vc.push_back(c[i]);
			s3[c[i]]=1;
			}
		}

		

		for(i=0; i<vc.size(); i++){
			t = 1;
			for(it= ss.begin(); it != ss.end(); it++){
				if(vc[i] == *it){
					p++;
					t = 0;
				}
			}
			if(t){
				x++;
			}
			if(p== ss.size()){
				printf("Round %d\nYou win.\n", n);
				check=1;
				break;
			}
			else if(x==7){
				printf("Round %d\nYou lose.\n", n);
				check=1;
				break;
			}
		}
		if(check==0)
		printf("Round %d\nYou chickened out.\n", n);

	}

	return 0;

}
