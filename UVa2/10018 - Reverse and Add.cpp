/* Date: 03.06.16
Problem: 10018 - Reverse and Add

*/
#include <bits/stdc++.h>

using namespace std;

long long palind(long long numb){
    long long xx, revs=0;

    while (numb > 0){
        xx = numb % 10;
        revs = revs * 10 + xx;
        numb = numb / 10;
    }

    return revs;
}

int main(){

    long long i, x, n;
    long long num;
    int tc;

    cin >> tc;
    while(tc--){
        scanf("%lld", &num);
        long long sum = 0,rev = 0;
        int add = 0;

    L:  n = num;
        rev = palind(num);

        sum = n + rev;
        add++;

        n = sum;
        sum = palind(sum);

        if(sum == n){ cout << add<<" "<< sum<< endl; }
        else{
            num = n;
            goto L;
        }
    }

	return 0;
}
