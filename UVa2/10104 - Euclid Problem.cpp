/* Date: 17.01.16
Problem: 10104 Euclid Problem
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
 
ll xGCD(ll a, ll b, int &x, int &y) {
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }
 
    int x1, y1;
    ll gcd = xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}
 
int main()
{
 
    long long a, b, g;
    int r, t,x, y;
 
    while(scanf("%lld %lld", &a, &b) != EOF){
		t=0;
		if(a<b){ swap(a, b);
			t=1;
		}
		g = xGCD(a, b, x, y);
 
	if(t){
		 swap(x, y);
	}
		cout << x << " "<<y << " "<< g << endl;
	}
 
    return 0;
}
