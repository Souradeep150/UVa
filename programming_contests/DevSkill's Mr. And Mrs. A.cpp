/* Date: 03.09.16
Problem: DevSkill's Mr. And Mrs. A

*/
#include <bits/stdc++.h>

#define N 1000
#define ll long long

using namespace std;

vector<int> v;
vector<ll> dev;
map <ll, int> myMap;

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

long long factor(int m){
    dev.push_back(1);
    long long sum = 1;

	for(int l = 2;  ; l++){

		if(m % l == 0){
            dev.push_back(l);
            sum += l;
            //myMap[v[l]]++;
		}
		if(l > m/2) break;
	}
	if(dev.size() == 1){
        dev.push_back(m);
        sum += m;
	}
	return sum;
}
vector<ll> vec;

void gen(){

    ll n;
    vec.push_back(0);

    for(int i=2; ; i++){
        n = i;
        if(n*n >= 1000000000009) break;
        while(1){
            n *= i;
            if(n>= 1000000000009) break;
            vec.push_back(n);
        }
    }
    vec.push_back(1000000000005);
    sort(vec.begin(),vec.end());
    vec.erase( unique( vec.begin(),vec.end()), vec.end());
}
ll b_search_l(ll s_value,ll beg,ll end){

    int found = 0;ll mid;

        while(found != 1){
            mid = (beg + end)/2;//cout<<cnnt[mid]<<endl;
                if(vec[mid]>=s_value && s_value>vec[mid-1]) {found=1;return mid;}
                else if(vec[mid]<s_value) beg=mid+1;
                else end = mid-1;
        }
}

ll b_search_h(ll s_value,ll beg,ll end){

    int found = 0;ll mid;

        while(found != 1){
            mid = (beg + end)/2;//cout<<cnnt[mid]<<endl;
                if(vec[mid]<=s_value && s_value<vec[mid+1]) {found=1;return mid;}
                else if(vec[mid]<s_value) beg=mid+1;
                else end = mid-1;
        }
}

int main(){

    int i, x, m = 0, n;
    gen();
    int tc;
    long long int l,h,ans;

    while(scanf("%d", &tc) == 1){

        for(int tt=1; tt<=tc; tt++){

            scanf("%lld %lld", &l, &h);
            m = b_search_h(h,0,vec.size()-1);
            n = b_search_l(l,0,vec.size()-1);

            printf("Case %d: %lld\n", tt, (m-n)+1);
        }
    }

	return 0;
}
