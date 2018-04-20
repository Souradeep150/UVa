/* Date: 21.01.16
Problem:  530 - Binomial Showdown
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

long prime[SIZE];
 unsigned long long gcd(unsigned long long a, unsigned long long b){
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

    unsigned long long n, m, g ,x, y,i,sum,sum1;
    while(cin>>x>>y)
	{
		if(x==0 && y==0) break;
		
		 g=(x-y)<y?x-y:y;
		 sum=1,sum1=1;
		 for(i=0;i<g;i++)
		 {
		 	sum=sum*(x-i);
		 	sum1=sum1*(i+1);
		 	m=gcd(sum,sum1);
		 	sum=sum/m;
		 	sum1=sum1/m;
		 }
		 cout<<sum/sum1<<"\n";
	}

    return 0;
}
