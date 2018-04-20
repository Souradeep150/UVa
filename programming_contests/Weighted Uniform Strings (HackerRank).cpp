
/* Date: 26.07.17
Problem: Weighted Uniform Strings

*/
#include<bits/stdc++.h>

using namespace std;

map<char, int> m;
map<char, int> charV;
map<int, int> queryV;

int main(){

    string s, str;
    int a, i, tc, x;
    char c = 'a';

    for(i=1; i<27; i++){
        charV[c] = i;
        c++;
    }
    long res = 0;

    cin >> str;
    cin >> tc;

    for(i=0; i<str.length(); i++){
        if( !m[str[i]]){
            m[str[i]] = 1;
            x = charV[str[i]];
         //   cout << x<< endl;
            queryV[x] = 1;
        }
    }

    int p = 0;

    for(i=0; i<str.length(); i++){

        if(str[i] == str[i+1]){
            if(p){
                x += charV[str[i]];
            }else{
                x = charV[str[i]] + charV[str[i]];
            }
            p = 1;
            queryV[x] = 1;

        }else p = 0;
    }


    map<int, int>::iterator it;

//    for(it=queryV.begin(); it != queryV.end(); it++){
//        cout << it->first<< endl;
//    }

    while(tc--){
        cin>> a;
        if(queryV[a]){
            cout << "Yes" << endl;
        }else cout << "No"<< endl;

    }
    return 0;

}
