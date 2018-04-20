/* Problem: 1726 - Automatic Cheater Detection
*/

#include<bits/stdc++.h>

using namespace std;

map<int, int> myMap;
map<int, int> notLeak;

int main(){
    int t, i, j, d, s, q, n;
    char r;

    scanf("%d", &t);
    while(t--){

        myMap.clear();
        notLeak.clear();

        scanf("%d", &q);

        for(i=0; i<q; i++){
            scanf("%d %d %c", &d, &s, &r);
            if(s==1 && r=='c'){
                myMap[d]++;
            }
            else if(s== 0 && r=='i'){
                notLeak[d]++;
            }
        }
        int res =0;

        map<int, int> :: iterator it;
        map<int, int> :: iterator it2;
        int temp;

        for(it = notLeak.begin(); it != notLeak.end(); it++){
                temp = 0;

            for(it2 = myMap.begin(); it2 != myMap.end(); it2++){
                if(it2->first > it->first){
                    temp += it2->second;
                }
            }
            if(it->second > 1){
                temp*= it->second;
            }
            res += temp;
        }
        cout << res<< endl;
    }

    return 0;
}
