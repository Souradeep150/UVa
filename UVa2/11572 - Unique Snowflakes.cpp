/* Problem: 11572 - Unique Snowflakes
*/
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> m;

int main() {
    int t, n, a, x, ans, cnt, seg;

    cin >> t;
    while(t--){
        cin >> n;
        m.clear();
        ans = 0, cnt = 0, seg = 0;

        for(int i=1; i<=n; i++) {
            cin >> x;
            a = m[x];
            if(a != 0) {
                seg = max(seg, a);
                cnt = i-seg-1;
            }
            cnt++;
            m[x] = i;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}
