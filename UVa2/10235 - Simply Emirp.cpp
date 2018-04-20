/* Date: 03.06.16
Problem: 10235 - Simply Emirp

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
    int num;

    seive();

    while(scanf("%d", &num) != EOF){
        int sum = 0;
        n = 0;
        if(num % 2 == 0 && num != 2 || prime[num]){
            cout <<num<<" is not prime."<< endl;
        }
        else{
            int rev = 0;
            n = num;

            while (num > 0){
                x = num % 10;
                rev = rev * 10 + x;
                num = num / 10;
            }
            if(!prime[n] && !prime[rev] && rev > 10 && rev != n && rev % 2 != 0){
                cout << n<<" is emirp."<< endl;
            }
            else cout <<n<<" is prime."<< endl;
        }
    }

	return 0;
}
