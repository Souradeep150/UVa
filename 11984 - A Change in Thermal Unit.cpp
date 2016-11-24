/* Date: 24.11.15
Problem: 11984 - A Change in Thermal Unit

*/
#include <bits/stdc++.h>

#define N 50000
#define LL long long

using namespace std;

int main(){
    int i, n, tc;
    double f, res, c, d;

    cin >> tc;

    for(i= 1; i<=tc; i++){
        cin >> c >> d;
        f = (double)((c*9/5)+32) + d;
//        cout << f << endl;
        res = (double)(f-32) / 1.8;
        printf("Case %d: %.2f\n",i, res);
    }

	return 0;
}

