/* Problem: 10789 - Prime Frequency
*/
 
#include <bits/stdc++.h>
 
#define N 3000
 
using namespace std;
 
 
vector <long long > v2;
map <char, int> myMap;
set<char> mySet;
 
bool prime[N];
 
int digitAdd(int n){
    int sum = 0;
    while(n > 9){
        sum += n%10;
        n /= 10;
    }
 
    return sum += n;
 
}
void seive(){
    int i;
    int temp;
 
    prime[2] = false;
    prime[1] = true;
 
    for(i=3; i<sqrt(N); i+=2){
        if(!prime[i]){
 
            for(int j = i*i; j<=N; j+= i){
                prime[j] = true;
            }
        }
    }
 
}
 
 
vector <char> v;
 
int main(){
 
    seive();
    string s;
    int n = 0, i, tc;
    int X;
 
    cin >> tc;
    while(tc--){
        n++;
        X = 0;
        myMap.clear();
        cin >> s;
        for(i=0; i<s.length(); i++){
            myMap[s[i]]++;
        }
        printf("Case %d: ", n);
        map<char, int> :: iterator it;
        for(it = myMap.begin(); it != myMap.end(); it++){
            int p = it->second;
            if(!prime[p] && p % 2 != 0 || p == 2){
                cout << it->first;
                X = 1;
            }
        }
        if(!X) cout << "empty";
        cout << endl;
 
    }
 
    return 0;
}
 
