#include <bits/stdc++.h>

using namespace std;

map<int, int> s;

int main(){
    int i, n, m, x;
    int tc;

    cin >> tc;

	while(tc--){
        int ans = 0;
        s.clear();

        cin>> n >> m;
        for(i=0; i<n; i++){
            cin>> x;
            s[x]++;
        }
        for(i=0; i<m; i++){
            cin>> x;
            s[x]--;
        }
        map<int, int>:: iterator it;
        for(it= s.begin(); it != s.end(); it++){
            ans += abs(it->second);
        }
        cout << ans<< endl;

	}

	return 0;
}
