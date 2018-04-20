/* Problem: 499 - What's The Frequency, Kenneth?
*/
 
#include <bits/stdc++.h>
 
#define N 3000
 
using namespace std;
 
 
vector <int> v2;
map <char, int> myMap;
set<char> mySet;
 
vector <char> v;
 
 
int main(){
 
    string s;
    int n = 0, i, j, tc, x=0;
 
//    cin >> tc;
 
    while(getline(cin, s)){
        int maax = -1;
        myMap.clear();
 
        for(i=0; i<s.length(); i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
                myMap[s[i]]++;
            }
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
        cout <<" "<< maax << endl;
 
 
    }
 
    return 0;
}
