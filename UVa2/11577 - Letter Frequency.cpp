/* Problem: 11577 - Letter Frequency
*/
 
#include <bits/stdc++.h>
 
#define N 3000
 
using namespace std;
 
 
vector <long long > v2;
map <char, int> myMap;
set<char> mySet;
vector <char> v;
 
int main(){
 
    string s;
    int n = 0, i, tc;
 
    cin >> tc;
    getchar();
 
    while(tc--){
        myMap.clear();
        getline(cin, s);
        int maax = -1;
 
        for(i=0; i<s.length(); i++){
            if(s[i] == ' ') continue;
            s[i] = tolower(s[i]);
            myMap[s[i]]++;
        }
        map<char, int>:: iterator it;
 
        for(it= myMap.begin(); it != myMap.end(); it++){
            int temp = it->second;
            maax = max(temp, maax);
        }
        for(it= myMap.begin(); it != myMap.end(); it++){
            char temp = it->first;
            if(maax == it->second){
                cout <<temp;
            }
        }
        cout << endl;
 
    }
 
    return 0;
}
