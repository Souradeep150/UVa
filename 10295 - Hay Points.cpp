#include <bits/stdc++.h>

using namespace std;

map<string, int> my;

int main(){
    int i, n, m,d, x, day;
    int tc, a, sub;
    string s;

    cin >> n>> m;
    while(n--){
        cin >> s >> d;
        my[s] = d;
    }
    while(m--){
        long long all = 0;

        while(1){
            getline(cin, s);
            if(s[0]=='.') break;
            stringstream ss(s);
            string wrd;
            while(ss >> wrd){
                all += my[wrd];
            }

        }
        cout << all<< endl;
    }


	return 0;
}
