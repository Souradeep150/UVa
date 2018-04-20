/* Problem: 11371 - Number Theory for Newbies
*/
 
#include <bits/stdc++.h>
 
#define N 3000
 
using namespace std;
 
 
vector <int> v2;
map <int, string> myMap;
set<char> mySet;
set<char> mySet2;
 
vector <string> v;
 
 
int main(){
 
    char s[200];
 
    while(scanf("%s", s) == 1) {
        int len = strlen(s), i;
 
        sort(s, s+len);
        for(i = 0; i < len; i++) {
            if(s[i] != '0') {
                swap(s[0], s[i]);
                break;
            }
        }
 
        long long a, b;
        istringstream ss(s);
        ss>> b;
 
        sort(s, s+len);
        reverse(s, s+len);
        istringstream aa(s);
        aa>> a;
 
        printf("%lld - %lld = %lld = 9 * %d\n", a, b, a-b, (a-b)/9);
 
    }
    return 0;
}
