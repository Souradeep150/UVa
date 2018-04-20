/* Date: 18.01.16
Problem: 11417 - GCD
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
#define SIZE 10000000

using namespace std;

vector <ll > v;
set <char> s;
map <char, int> m;


int gcd(long a, long b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

ll xGCD(ll a, ll b, ll &x, ll &y) {
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }

    ll x1, y1;
    ll gcd = xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

ll fact(int n)
{
    int i;
    ll f=1;
    for(i=1; i<=n; i++)
    {
        f= f*i;
    }
    return f;
}

int main()
{

    long long a, b, g ,x, y;
    int r, t, i, j;

    while(1){
		scanf("%lld", &b);
		if(b==0) break;
		x = 0;
		for(i=1; i<b; i++){
			for(j= i+1; j<=b; j++){
				x += gcd(i, j);
			}
		}
		printf("%lld\n", x);
	}

    return 0;
}
