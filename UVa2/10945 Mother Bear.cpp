/* Problem: 10945 Mother Bear
*/
 
#include <bits/stdc++.h>
 
#define N 10000000
 
using namespace std;
 
 
vector <long long > v2;
map <string, int> myMap;
set<char> mySet;
 
bool prime[N];
int sum[10000];
 
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
 
    for(i=3; i<sqrt(N); i+=2){
        if(!prime[i]){
            if(i> 10){
                temp = digitAdd(i);
                sum[i] = temp;
            }
            for(int j = i*i; j<=N; j+= i){
                prime[j] = true;
            }
        }
    }
 
}
 
vector <char> v;
 
int main(){
 
    string s;
    int n, i;
 
    while(1){
        v.clear();
        getline(cin, s);
        if(s == "DONE") break;
 
        for(i=0; i<s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' &&s[i] <= 'Z'){
                s[i] = tolower(s[i]);
                v.push_back(s[i]);
            }
        }
        n = 0;
        for(i=0; i<v.size()/2; i++){
            if(v[i] != v[v.size() - (i+1)]){
                n = 1;
            }
        }
        if(n) cout << "Uh oh.." << endl;
        else cout << "You won't be eaten!" << endl;
    }
 
    return 0;
}
