/* Problem: 11369 - Shopaholic
 */
#include<bits/stdc++.h>
#define LL long long

using namespace std;

vector<int> v;

int main()
{
    int tc, i, n;

    cin >> tc;

    while(tc--){
        LL sum = 0;
        v.clear();

        cin >> n;
        while(n--){
            cin >> i;
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        for(i=2; i<v.size(); i+=3){
            sum += v[i];

        }
        cout << sum << endl;
    }
    return 0;
}


