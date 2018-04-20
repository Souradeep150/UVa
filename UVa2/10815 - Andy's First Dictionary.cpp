/* Problem: 10815 - Andy's First Dictionary
*/
#include<bits/stdc++.h>

using namespace std;

vector<char> myVec;
map<int, int> check;
map<string, int> myMap;
map<string, string> dict;
set<char> mySet;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int main(){

    string s, temp;
    int i, n;

    while(getline(cin, s)){
	temp = "";
	s = toLower(s);
    for(i=0; i<=s.length(); i++){
        string tmp = "";
        if(s[i]== ' ' || s[i] == '\0' && temp.length() != 0){
            tmp = temp;
            if(myMap[tmp]== 0) myMap[tmp] = 1;
            temp = "";
        }
        else if(s[i] >= 'a' && s[i] <='z'){
            temp += s[i];
        }
        else if(temp.length() != 0) {
            tmp = temp;
            if(myMap[tmp]== 0) myMap[tmp] = 1;
            temp = "";
        }
    }
    }
    map<string, int>:: iterator it;
    it= myMap.begin();
    it++;
    for(; it != myMap.end(); it++){
        cout << it->first << endl;
    }
 //   cout << endl;
    return 0;
}
