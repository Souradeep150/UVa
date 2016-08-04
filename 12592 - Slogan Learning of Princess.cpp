/* Problem: 12592 - Slogan Learning of Princess
*/
#include<bits/stdc++.h>

using namespace std;

map<string, int> myMap;
map<string, string> dict;
set<char> mySet;

int main(){

    int i, n, q, a;
    string value, key;
    string s;

    cin >> n;
    getchar();

    for(i=1; i<=n+n; i++){
        getline(cin, s);
        if(i %2 == 0) dict[value] = s;
        else value = s;
    }
    cin >> q;
    getchar();

    for(i=0; i<q; i++){
        getline(cin, s);
        cout << dict[s] << endl;
    }
    return 0;
}
