/* Date: 07.11.16
Problem:11850 - Alaska

*/
#include <bits/stdc++.h>


#define N 1000

using namespace std;

vector<int> v;

int prime[N+1];
bool pri[1000];

string intTostr(int s){
    string str;
    while(s > 9){
        int n = s%10;
        str += n +'0';
        s /= 10;
    }
    str += s +'0';
    reverse(str.begin(), str.end());

    return str;
}

void seive(){
	int i, j;
	v.push_back(2);
	pri[2] = true;


	for(i=3; i<sqrt(N); i+=2){
		if(!prime[i]){
			for(j= i*2; j <= N; j+=i){
				prime[j]= 1;
			}
		}
	}
	for(i=3; i<=N; i+=2){
		if(!prime[i]){
			v.push_back(i);
			pri[i] = true;
		}
	}
}

string p;

string split(string s){
    string r;

    for(int i=0; i<s.length(); i++){
        if(s[i] != ','){
            r += s[i];
        }
        else {
            p = s.substr(i+1, s.length()-1);
            return r;
        }

    }
}
vector <int> vc;

int main(){
    int d, n,tc, i;

    while(scanf("%d", &tc) && tc){
        int t = 1;
        vc.clear();

        for(i=0; i<tc; i++){
            scanf("%d", &n);
            vc.push_back(n);
        }
        sort(vc.begin(), vc.end());
        int p = 1422 - vc[vc.size()-1];

        for(i=1; i<tc; i++){
            if(p+p > 200 || vc[0] > 200){
                printf("IMPOSSIBLE\n");
                t = 0;
                break;
            }
            if((vc[i]-vc[i-1]) > 200){
                printf("IMPOSSIBLE\n");
                t = 0;
                break;
            }
        }
        if(t) printf("POSSIBLE\n");
    }

    return 0;

}
