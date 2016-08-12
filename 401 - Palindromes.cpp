/* Problem: 401 - Palindromes
*/
#include<bits/stdc++.h>

using namespace std;

vector<char> myVec;
map<int, int> check;
map<char, char> revChar;


string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int main(){
    string s, rev;
    int i, n;

    revChar['A'] = 'A';
    revChar['H'] = 'H';
    revChar['I'] = 'I';
    revChar['O'] = 'O';
    revChar['M'] = 'M';
    revChar['T'] = 'T';
    revChar['V'] = 'V';
    revChar['U'] = 'U';
    revChar['Y'] = 'Y';
    revChar['W'] = 'W';
    revChar['X'] = 'X';
    revChar['1'] = '1';
    revChar['8'] = '8';

    revChar['E'] = '3';
    revChar['L'] = 'J';
    revChar['J'] = 'L';
    revChar['S'] = '2';
    revChar['Z'] = '5';
    revChar['2'] = 'S';
    revChar['3'] = 'E';
    revChar['5'] = 'Z';

    while(cin>> s){
        int palind = 1, mirror = 1;
        rev = s;
        n = s.length();

        for(int i=0;i<=s.length()/2;i++){

            if(s[i]!= s[n-1-i]) palind=0;
            if(s[n-1-i]!= revChar[s[i]]) mirror=0;
        }

        if(palind && mirror){
            cout << rev<<" -- is a mirrored palindrome."<< endl<<endl;
        }
        else if(!palind && mirror){
            cout << rev<<" -- is a mirrored string."<< endl<< endl;
        }
        else if(palind && !mirror){
            cout << rev<<" -- is a regular palindrome."<< endl<< endl;
        }
        else cout << rev << " -- is not a palindrome."<< endl<< endl;
    }

    return 0;
}
