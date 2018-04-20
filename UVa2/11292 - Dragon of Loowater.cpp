/* Problem: 11292 - Dragon of Loowater
*/
#include<bits/stdc++.h>

using namespace std;

vector<int> myVec;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int main(){

    int i, t, n,m, a, b;
    int x;

    while(cin>> n>> m && n && m){
        myVec.clear();
        priority_queue<int> pq;

        for(i=0; i<n; i++){
            cin >> x;
            x = -x;
            pq.push(x);
        }
        for(i=0; i<m; i++){
            cin >> x;
            myVec.push_back(x);
        }
        sort(myVec.begin(), myVec.end());
        a = 0;
        for(i=0; i<myVec.size(); i++){
            b = -pq.top();
            if(pq.empty()) break;
            if(myVec[i] >= b){
                a += myVec[i];
                pq.pop();
            }
        }
        if(pq.empty()){
            cout << a << endl;
        }
        else cout <<"Loowater is doomed!" << endl;
    }

    return 0;
}
