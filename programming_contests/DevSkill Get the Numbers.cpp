/* Date: 07.11.16
Problem: DevSkill Get the Numbers

*/
#include <bits/stdc++.h>

#define N 1000

using namespace std;

vector<int> v;

string intTostr(int s){
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

vector<string> vc;
vector <string> suc;
vector <string> suc2;

vector <string> fail;
vector <string> fail2;

string x;

string ser(string s){

    for(int y=0; y<vc.size(); y++){
        string ss=vc[y];
        int same=1,z;

        for(z=0; z<ss.length(); z++){
            if(s[z]!=ss[z] && s[z]!='*'){
                same=0;
                break;
            }
        }
        if(same==1){

            return vc[y];
        }
    }
    return "null";
}


string split(string s){
    string r;

    for(int i=0; i<s.length(); i++){
        if(s[i] != ','){
            r += s[i];
        }
        else {
            x = s.substr(i+1, s.length()-1);
            return r;
        }

    }
}
int main(){

    string s;
    int i, tc, n;
    string res;


    scanf("%d", &tc);
    for(i=1; i<=tc; i++){

        vc.clear();
        fail.clear();
        suc.clear();
        fail2.clear();
        suc2.clear();

        scanf("%d", &n);
        for(int j=0; j<n; j++){
            cin >> s;
            vc.push_back(s);
        }
        for(int j=0; j<n; j++){
            string temp;
            int t = 0;
            cin >> s;
            temp = split(s);


            if(x == "Success"){
                suc.push_back(temp);
                for(int a=0; a<fail.size(); a++){
                    if(fail[a] == temp){
                        suc2.push_back("Confused");
                        fail2[a] = "Confused";
                        t = 1;
                        break;
                    }
                }
                 if(!t) suc2.push_back(ser(temp));
            }
            else{
                fail.push_back(temp);
                for(int a=0; a<suc.size(); a++){
                    if(suc[a] == temp){
                        fail2.push_back("Confused");
                        suc2[a] = "Confused";
                        t = 1;
                        break;
                    }
                }
                if(!t) fail2.push_back(ser(temp));
            }

        }
        printf("Case: %d\n", i);

        printf("Success list\n");


        for(int ii = 0; ii<suc.size(); ii++){
            cout << suc[ii]<<" : "<< suc2[ii]<< endl;
        }
        printf("Failed list\n");
        for(int ii = 0; ii<fail.size(); ii++){
            cout << fail[ii]<<" : "<< fail2[ii]<< endl;
        }
    }
    return 0;

}
