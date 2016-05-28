/* Problem: 10931 - Parity
 */
#include<bits/stdc++.h>
#define LL long long

using namespace std;

queue<int> v;

int main()
{
    int tc, i, n;
    while(scanf("%d", &n) && n){
        int one = 0, t = 1;
        v = queue<int>();

        string binary = bitset<35>(n).to_string(); //to binary

        for(i=0; i<binary.length(); i++){
            if(binary[i] == '1'){
                one++;
            }
            v.push(binary[i]-'0');
        }
        n = v.size();
        for(i=0; i<n; i++){  /* for avoiding leading 0 */

            if(v.front() == 1) t = 0;
            if(v.front() == 0 && t ){
                v.pop();
            }
        }
        cout<<"The parity of ";
        n = v.size();
        for(i=0; i<n; i++){   
            cout << v.front();
            v.pop();
        }
        cout<<" is "<<one<<" (mod 2)."<< endl;
    }
    
    return 0;
}


