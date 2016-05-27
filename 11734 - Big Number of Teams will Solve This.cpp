/* Problem: 11734 - Big Number of Teams will Solve This
 */
#include<bits/stdc++.h>


using namespace std;

vector<char> v;
vector<char> v2;

int main()
{
    string conts, judge;
    int tc, i, n;

    cin >> tc;
    getchar();
    for(i=1; i<=tc; i++){
        int st, snd, t = 1;
        st = snd = 0;
        v.clear();
        v2.clear();

        getline(cin, conts);
        getline(cin, judge);

        if(conts == judge){
            cout <<"Case "<<i<<": "<< "Yes"<<endl;
            continue;
        }
        for(int l=0; l<conts.length(); l++){
            if(conts[l]== ' '){
                st++;
                continue;
            }
            v.push_back(conts[l]);
        }
        for(int l=0; l<judge.length(); l++){
            if(judge[l]== ' '){
                snd++;
                continue;
            }
            v2.push_back(judge[l]);
        }
        if(v == v2 && st != snd) cout <<"Case "<<i<<": "<< "Output Format Error"<<endl;
        else  cout <<"Case "<<i<<": "<< "Wrong Answer"<<endl;
    }
    return 0;
}


