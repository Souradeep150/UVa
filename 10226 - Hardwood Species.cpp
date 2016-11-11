
#include <bits/stdc++.h>

using namespace std;

map<string, int> my;

int main(){
    int i, n, a;
    int tc;
    string s;

    cin >> tc;
    getchar();
    getline(cin, s);

	while(tc--){
        my.clear();
        int total = 0;

        while(1){
//            cin>> s;
            getline(cin, s);
            if(s.length() == 0) break;
            my[s]++;
            total++;
        }
        map<string, int>:: iterator it;
        for(it = my.begin(); it != my.end(); it++){
            float fl = it->second*(100.0/total);

            cout << it->first<< " ";
            printf("%.4f\n", fl);
        }
        if(tc>0) cout << endl;
	}
	return 0;
}
