/* worst AC code for this problem
Problem: 1726 - Automatic Cheater Detection
*/
#include<bits/stdc++.h>

using namespace std;

vector<int> leackCorrect;
vector<int> notLeackInc;

int main(){
    int t, i, d, s, q, n;
    char r;

    scanf("%d", &t);
    while(t--){
        leackCorrect.clear();
        notLeackInc.clear();
        scanf("%d", &q);

        for(i=0; i<q; i++){
            scanf("%d %d %c", &d, &s, &r);
            if(s==1 && r=='c'){
                leackCorrect.push_back(d);
            }
            else if(s== 0 && r=='i'){
                notLeackInc.push_back(d);
            }
        }
        sort(leackCorrect.begin(), leackCorrect.end());
        sort(notLeackInc.begin(), notLeackInc.end());
        int res =0;
        int j;

        for(i=0; i<notLeackInc.size(); i++){
            for( j=0; j<leackCorrect.size() ; j++){
                if(notLeackInc[i] < leackCorrect[j]){
                    res++;
                }
            }
        }
        cout << res<< endl;
    }

    return 0;
}
