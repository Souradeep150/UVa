/* Date: 13.01.17
Problem: 11839 - Optical Reader

*/
#include <bits/stdc++.h>

int main() {
    int i, t;
    LL n, ll;
    int a, b, c, d, e;
    while(cin >> t && t){
        map<char, bool> check;
        map<char, bool> :: iterator it;
        for(i=0; i<t; i++){
            check.clear();
            cin >> a >> b >> c >> d >> e;
            if(a >= 0 && a <= 127) check['A'] = true;
            if(b >= 0 && b <= 127) check['B'] = true;
            if(c >= 0 && c <= 127) check['C'] = true;
            if(d >= 0 && d <= 127) check['D'] = true;
            if(e >= 0 && e <= 127) check['E'] = true;
         //   cout << i << endl;
            if(check.size() == 1){
                it = check.begin();
                cout << it->first<< endl;
            }
            else cout << "*"<< endl;
        }
    }

    return 0;
}
