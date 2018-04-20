/* Problem: 12555 - Baby Me
*/
#include<bits/stdc++.h>

using namespace std;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int main(){

    char s[20];
    int i, t, n, a, b;

    cin>> t;
    getchar();

    for(i=1; i<=t; i++){
        float kg = 0.0, b = 0;
        cin >> a;
        gets(s);


        if(strlen(s)>3){
            b = s[3] - '0';
        }
        kg = (a*0.5)+(b*0.05);

        if(kg - (int)kg == 0.0){
            printf("Case %d: %d\n",i, (int)kg);
        }
        else printf("Case %d: %g\n",i, kg); // %g for trailing zero :D
    }
    return 0;
}
