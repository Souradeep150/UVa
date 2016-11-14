/* PROG: 755 - 487--3279
*/
#include <bits/stdc++.h>

using namespace std;

map<string, int> my;

string pars(string str){
    string t;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='-') continue;
        else t += str[i];
    }
    str = t.substr(3, 6);
    t = t.substr(0, 3);
    t += '-';
    t += str;

    return t;
}

string conv(string s);

int main(){
    int i, n;
    int tc;
    string s, temp;
    cin >> tc;

    map<string, int> ::iterator it;

    while(tc--){
        my.clear();

        scanf("\n%d", &n);
        while(n--){
            cin >> s;
            s = conv(s);
            my[pars(s)]++;
        }
        int t = 0;
        for(it = my.begin(); it != my.end(); it++){
            if(it->second > 1){
                t = 1;
                break;
            }
        }

        if(!t) cout <<"No duplicates."<< endl;
        else{
            for(it = my.begin(); it != my.end(); it++){
                if(it->second == 1){
                }
                else {
                    cout << it->first<< " "<< it->second << endl;
                }
            }
        }
        if(tc> 0) cout << endl;
    }

	return 0;
}

string conv(string s){
    string tem;

    for(int i=0; i<s.length(); i++){
        if(s[i]== '-') continue;

        if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C'){
            tem += '2';
        }
        else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F'){
            tem += '3';
        }
        else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I'){
            tem += '4';
        }
        else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L'){
            tem += '5';
        }
        else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O'){
            tem += '6';
        }
        else if(s[i] == 'P' || s[i] == 'R' || s[i] == 'S'){
            tem += '7';
        }
        else if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V'){
            tem += '8';
        }
        else if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y'){
            tem += '9';
        }
        else tem += s[i];
    }
    return tem;
}
