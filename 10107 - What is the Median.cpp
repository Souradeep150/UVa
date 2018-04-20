/* Date: 13.11.16
Problem:10107 - What is the Median?
*/
#include <bits/stdc++.h>

#define N 1000

using namespace std;

vector<int> v;


int main(){
    int i, n;
    int x;

    while(cin >> x){
        v.push_back(x);
        sort(v.begin(), v.end());

        if(v.size() % 2!=0){
            n = v.size()/2;
            cout << v[n]<< endl;
        }
        else{
            n = v.size()/2;
            n = (v[n-1]+v[n])/2;
            cout << n << endl;
        }
    }
    return 0;

}
