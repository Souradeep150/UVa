/* Problem: 11221 - Magic square palindromes.
*/
#include<bits/stdc++.h>

using namespace std;

vector<char> myVec;

int main(){
    int i, j;
    int t, x;
    string s;

    cin>> t;
    getchar();

    for(i=1; i<=t; i++){
        myVec.clear();
        getline(cin, s);

        for(j=0; j<s.length(); j++){
            if(s[j] >= 'a' && s[j] <= 'z'){
                myVec.push_back(s[j]);
            }
        }
        int res = 1;
        float len = sqrt(myVec.size());

        if(len - (int)len == 0){
            int l, k = len;
            char line[k][k];
            x = 0;


            for(j=0; j<k; j++){
                for(l=0; l<k; l++){
                    line[j][l] = myVec[x];
                    x++;
                }
            }
            x = 0;
            for(j=0; j<k; j++){
                if(res == 0) break;
                
                for(l=0; l<k; l++){
                    if(line[l][j] != myVec[x]){
                        res = 0;
                        break;
                    }
                    x++;
                } 
            }
            x = 0;
            for(j=k-1; j>= 0; j--){
                if(res == 0) break;

                for(l=k-1; l>= 0; l--){
                    if(line[j][l] != myVec[x]){
                        res = 0;
                        break;
                    }
                    x++;
                }
            }
            x = 0;
            for(j=k-1; j>= 0; j--){
                if(res == 0) break;

                for(l=k-1; l>= 0; l--){
                    if(line[l][j] != myVec[x]){
                        res = 0;
                        break;
                    }
                    x++;
                } 
            }
            if(res){
                printf("Case #%d:\n%d\n", i, (int)len);
            }
            else printf("Case #%d:\nNo magic :(\n", i);

        }
        else printf("Case #%d:\nNo magic :(\n", i);

    }

    return 0;
}
