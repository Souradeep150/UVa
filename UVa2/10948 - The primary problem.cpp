/* Date: 03.06.16
Problem: 10948 - The primary problem

*/
#include <bits/stdc++.h>

#define N 1000000

using namespace std;

vector<int> v;
map <char, int> myMap;

int prime[N+1];

void seive(){
	int i, j;
	v.push_back(2);


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
		}
	}
}


int main(){

    int i, x, n;
    int num, sum;
    int tc;
    seive();

    while(scanf("%d", &n) && n){
        tc = 1;
        cout << n<<":"<< endl;
        for(i=0; ; i++){
            num = n - v[i];
            if(!prime[num] && num %2 != 0 || num == 2){

                cout << v[i] <<"+"<< num << endl;
                break;
            }
            if(v[i] > n/2){tc = 0; break; }
        }
        if(!tc) cout << "NO WAY!"<< endl;
    }

	return 0;
}
