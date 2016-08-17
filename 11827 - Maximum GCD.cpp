/* Problem: 11827 - Maximum GCD
*/
#include<bits/stdc++.h>

using namespace std;

vector<int> myVec;
map<int, int> check;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}
int GCD(int a, int b) {
    if( b == 0 ) return a;
    return GCD(b, a % b);
}

void str2int (string &str) {
  stringstream ss(str);
  int num;
  while(ss >> num)
    myVec.push_back(num);
}

int main(){

    int i, t, n,m, a, b;
    int x;
    string s;

    cin >> t;
    getchar();

    while(t--){
        getline(cin, s);
        x =m = 0;
        myVec.clear();
        str2int(s);

        for(i=0; i<myVec.size(); i++){
            for(int j = i+1; j<myVec.size(); j++){
                a = GCD(myVec[i], myVec[j]);
                m = max(m, a);
            }
        }
        cout << m << endl;
    }

    return 0;
}
