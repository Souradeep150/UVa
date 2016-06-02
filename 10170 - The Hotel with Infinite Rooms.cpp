/* Date: 03.06.16
Problem: 10170 - The Hotel with Infinite Rooms

*/
#include <bits/stdc++.h>

using namespace std;

int main(){

    long long groupMem, day;
    long long i, x, n;

    while(scanf("%lld %lld", &groupMem, &day) != EOF){

    x = n = 0;

    for(i=groupMem; ; i++){
        if(x >= day) break;
        x += i;
        n = i;
    }
    cout << n << endl;
    }
	return 0;
}
