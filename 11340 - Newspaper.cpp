/* Problem: 11340 - Newspaper
*/
#include<bits/stdc++.h>

using namespace std;

vector<char> myVec;
map<int, int> check;
map<char, int> myMap;
set<char> mySet;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int main(){

    string s, temp="";
    int t, i, price, n;
    char c;

    scanf("%d", &t);
    getchar();

    while(t--){
    	myMap.clear();
        int total = 0;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            cin >> c>> price;
            myMap[c] = price;
        }
        cin >> n;
        getchar();
        for(i=0; i<n; i++){
            getline(cin, s);
            for(int j =0; j<s.length(); j++){
                total += myMap[s[j]];
            }
        }
        
        double res = (double) total/100;
        printf("%.2lf$\n", res);
    }

    return 0;
}
