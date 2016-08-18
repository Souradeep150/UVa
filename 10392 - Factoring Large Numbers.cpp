/* Problem: 10392 - Factoring Large Numbers
*/
#include<bits/stdc++.h>
#define MAX 1000000

typedef long long ll;

using namespace std;

vector<int> myVec;

bool prime[MAX];

void seive(){
    int i;
    myVec.push_back(2);
    for(i=3; i<sqrt(MAX); i+=2){
        for(ll j = i*i; j<=MAX; j+= i){
            prime[j] = 1;
        }
    }
    for(i=3; i<MAX; i+=2){
        if(!prime[i]) myVec.push_back(i);
    }
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
void DivCounter(ll numb){
    int i;

    for(i=0; i<myVec.size() ; i++){
    
        if(numb % myVec[i]==0){
            while(numb % myVec[i] ==0){
                cout <<"    "<< myVec[i] << endl;
                numb /= myVec[i];
            }
        }
    }
    if(numb != 1) cout <<"    "<< numb << endl;

}

int main(){

    ll i, n;
    seive();

    while(scanf("%lld", &n) && n > 0){
        DivCounter(n);
        cout << endl;
    }

    return 0;
}
