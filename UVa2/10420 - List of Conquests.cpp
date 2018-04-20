/* Problem: 10420 - List of Conquests
*/
 
#include <bits/stdc++.h>
 
#define N 10000000
 
using namespace std;
 
vector <long long> v;
vector <long long > v2;
map <string, int> myMap;
set<char> mySet;
 
 
int main(){
 
    string ss;
    string s;
    int i, n, tc;
    char chs[30];
 
    cin >> tc;
    getchar();
 
    while(tc--){
        getline(cin, s);
        istringstream is(s);
        is>>s;
 
        myMap[s]++;
    }
    map<string, int>:: iterator it;
    for(it = myMap.begin(); it != myMap.end(); it++){
        cout << it -> first << " "<< it -> second << endl;
    }
    return 0;
}
