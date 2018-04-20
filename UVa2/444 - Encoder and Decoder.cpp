/* Date: 28.09.16
Problem: 444 - Encoder and Decoder
*/
#include <bits/stdc++.h>

using namespace std;

map <char, string> myMap;

string intTostr(int s){    /* Convert integer to String */
    string str;
    while(s > 9){
        int n = s%10;
        str += n +'0';
        s /= 10;
    }
    str += s +'0';
    reverse(str.begin(), str.end());

    return str;
}

char mapFind(string s){   /* Find Value in map and returning the Key */
    map<char, string> :: iterator it;

    for (it = myMap.begin(); it != myMap.end(); ++it )
    if (it->second == s)
        return it->first;
}

int main(){

    int i, x, n;
    string str, res;
    
    /* Storing in map as Key and Value */
    x = 65;
    for(char c = 'A'; c<='Z'; c++){
        myMap[c] = intTostr(x);
        x++;
    }
    x = 97;
    for(char c = 'a'; c<='z'; c++){
        myMap[c] = intTostr(x);
        x++;
    }
    myMap[' ']= "32";
    myMap['!']= "33";
    myMap[',']= "44";
    myMap['.']= "46";
    myMap[':']= "58";
    myMap[';']= "59";
    myMap['?']= "63";


    while(getline(cin, str)){ // getting input End of File
        res = "";
        n = 1;

        if(str[0] >= '0' && str[0] <= '9'){ // if input is encoded 
            n = 0;
            reverse(str.begin(), str.end());
            for(int i=0; i<str.length(); i++){
                string temp;
                if(str[i] == '1'){
                    temp += str[i];
                    temp += str[i+1];
                    temp += str[i+2];
                    i += 2;
                }
                else{
                    temp += str[i];
                    temp += str[i+1];
                    i++;
                }
                res += mapFind(temp);
            }
        }
        else{
            for(int i=0; i<str.length(); i++){
                char c = str[i];
                res += myMap[c];
            }
        }

        if(n) reverse(res.begin(), res.end());

        cout << res<< endl;
    }

	return 0;
}
