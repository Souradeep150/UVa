/* Problem: 10062 - Tell me the frequencies!
*/
 
#include <bits/stdc++.h>
 
#define N 3000
 
using namespace std;
 
vector <char> v; 
vector <int> v2;
map <char, int> myMap;
set<char> mySet;

priority_queue<int> pq;
 
int main(){
 
    string s;
    int n = 0, i, j, tc, x=0;
 
//    cin >> tc;
 
    while(getline(cin, s)){
        if(x) cout << endl;
        v.clear();
        v2.clear();
        myMap.clear();
 
        for(i=0; i<s.length(); i++){
            myMap[s[i]]++;
        }
        map<char, int>:: iterator it;
 
 
        for( it = myMap.begin(); it != myMap.end(); it++){
            pq.push(-it->second);
        }
 
        while(!pq.empty())
        {
            map<char, int>:: iterator it;
 
            int a= -pq.top();
            for(it=myMap.end(); ;it--){
                if(a==it->second){
                    cout<<(int)it->first<<" "<<it->second<<endl;
                    it->second=0;
                    break;
                }
            }
            pq.pop();
        }
        
		x = 1;
    }
 
    return 0;
}
 
