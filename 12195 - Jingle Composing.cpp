/* Problem: 12195 - Jingle Composing
*/
#include<bits/stdc++.h>

using namespace std;

map<char, float> revChar;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int main(){


    revChar['W'] = 1.00;
    revChar['H'] = 0.50;
    revChar['Q'] = 0.25;
    revChar['E'] = 0.125;
    revChar['S'] = 0.0625;
    revChar['T'] = 0.03125;
    revChar['X'] = 0.015625;

    string s;
    float all;

    while(cin>> s){
    	
   //     if(s[0] = '*') break;
   	if(s.length()<2) break;
   	
        all = 1.23;
        int n = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '/'){
                if(all == 1.000000){
                    n++;
                }
                all = 0.00;
                continue;
            }
             
            all += revChar[s[i]];
        }
        printf("%d\n", n);
    }
    return 0;
}
