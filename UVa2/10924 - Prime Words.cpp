/* Date: 03.06.16
Problem: 10924 - Prime Words

*/
#include <bits/stdc++.h>

using namespace std;

vector<int> v;
map <char, int> myMap;
#define N 5000
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

    char day[25];
    char c;
    int i, x, n;
    c = 'a';
    for(i=1; i<27; i++){
        myMap[c] = i;
        c++;
    }
    c = 'A';
    for(i=27; i<=52; i++){
        myMap[c] = i;
        c++;
    }
    seive();

    while(scanf("%s", &day) != EOF){
        int sum = 0;
        for(i=0; i<strlen(day) ; i++){
            sum += myMap[day[i]];
        }
        if(sum % 2 != 0 && !prime[sum] || sum == 2){
            cout <<"It is a prime word."<< endl;
        }
        else  cout <<"It is not a prime word."<< endl;
    }

	return 0;
}
