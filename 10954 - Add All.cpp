/* Problem: 10954 - Add All
*/
#include<bits/stdc++.h>

#define LL long long

using namespace std;

priority_queue<LL> pq;

int main(){
    int i, m, n;
    int tc;

    while(scanf("%d", &tc) && tc){
        LL a, b, alll=0, sum = 0;

        for(i=0; i<tc; i++){
            cin >> n;
            pq.push(n*-1);
        }
        while(1){
            a = (pq.top()*-1);
            pq.pop();

            b = (pq.top()*-1);
            pq.pop();

            sum = a+b;

            alll += (sum);
            pq.push(-sum);
            if(pq.size()==1) break;
        }
        cout << alll << endl;
        pq = priority_queue<LL>();

    }

    return 0;
}
