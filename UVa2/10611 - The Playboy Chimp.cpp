/* Date: 10.02.16
Problem: 10611 - The Playboy Chimp
*/
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#define ll long long
#define SIZE 100000000

using namespace std;

vector <int> v;

long long l,h,mid;

long bs(long l1, long h1, int n){
	mid = (l1+h1)/2;

     if(h1<l1)
		return h1;
	else if(v[mid]==n)
		return mid;


	else if(v[mid]> n){
		bs(l1, mid-1, n);
	}
	else if(v[mid] <n){
		bs(mid+1, h1, n);
	}
}

int main(){
	int i, a , q, b;

	int  t, n;

	scanf("%d", &t);
	for(i=0; i<t; i++){
		cin >> n;
		v.push_back(n);
	}
	cin >> a;

	for(int j =0; j<a; j++){

		cin >> q;
		bs(0, v.size(), q);

		for(i=mid; i>=0; i--){
			if(v[0]== q){
				cout << "X ";
				break;
			}
			else if(v[v.size()-1] == q){
				cout << v[v.size()-2] <<" ";
				break;
			}
			else if(q > v[v.size()-1]){
				cout << v[v.size()-1] << " ";
				break;
			}

			if(v[i]< q){
				cout << v[i]<<" ";
				break;
			}
		}

		for(i = mid; ; i++){
			if(i>=v.size()){
				cout << "X"<< endl;
				break;
			}
			if(v[i] > q){
				cout << v[i] << endl;
				break;
			}
		}
	}

	return 0;
}
