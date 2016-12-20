/* Date: 20.12.16
Problem:

*/
#include <bits/stdc++.h>

using namespace std;

vector<int> v;
map<char, int> myMap;


string tem, x;

string split(string s){

    for(int i=0; i<s.length(); i++){
        if(s[i]== ','){
            x = s.substr(i+1, s.length()-1);
            break;
        }
        tem += s[i];
    }
    return tem;
}

bool compare(char a, char b){

	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}

void indexed(string s){
    for(int i=0; i<s.length(); i++){
        myMap[s[i]]++;
    }
}
priority_queue<int> pq;

int main(){
    int t, i, j,r, c, m, n;
    string s;


    cin >> t;

    for(i=1; i<=t; i++){
        myMap.clear();
        priority_queue<int> pq;

        cin >> r >> c >> m >> n;

        for(j=0; j<r; j++){
            cin >> s;
            indexed(s);
        }
        map<char, int>:: iterator it;
        for(it = myMap.begin(); it != myMap.end(); it++){
            pq.push(it->second);
        }
        
        int res=0, maxx = pq.top();
        for(it = myMap.begin(); it != myMap.end(); it++){
            if(maxx == it->second){
                res++;
            }
        }
        res = n*((r*c)-(maxx*res))+(maxx*m)*res;

        printf("Case %d: %d\n", i, res);
    }

	return 0;
}

