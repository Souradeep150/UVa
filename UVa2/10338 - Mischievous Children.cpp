/* Date: 17.01.16
Problem: 10338 - Mischievous Children
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

    long long i,j;
    int r, t;
    string c;

    cin >> t;

    for(int x =1; x<=t; x++)
    {	s.clear();
		m.clear();

        cin >> c;
        for(i=0; i<c.length(); i++)
        {
        	m[c[i]]++;
            s.insert(c[i]);
        }

        int n = c.length();
        /* Permutation */
        i = fact(n);

		set<char>:: iterator it;
		for(it=s.begin();it!=s.end();it++){
			int g = m[*it];
			if(g>1){
				i = i/fact(g);
			}
		}
        cout <<"Data set "<<x<<": "<< i<< endl;

    }
    return 0;

}
