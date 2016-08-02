/* Problem: 10282 - Babelfish
*/

#include<bits/stdc++.h>

using namespace std;

map<string, int> myMap;
map<string, string> dict;
set<char> mySet;

int main(){

    char inp[200];
    string value, key;
    string s;

    while(gets(inp)){

        if(inp[0]=='\0') break;
        stringstream ss(inp);
        ss >> value;
        ss >> key;
        dict[key] = value;
    }
    while(cin>> s){
        if(dict[s]== "") cout << "eh" << endl;
        else cout << dict[s] << endl;
    }


    return 0;
}
