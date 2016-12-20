
#include <bits/stdc++.h>

using namespace std;

bool compare(char a, char b){

	if(tolower(a) == tolower(b)){
		return a<b;
	}
	return tolower(a) < tolower(b);
}


int main(){
    int t, i, n;
    string s, s2;
    char c;

    cin >> t;
    n = t;
    while(t--){
     //   n--;
        cin >> s;
        sort(s.begin(), s.end(), compare);

        do{
           cout << s<< endl;
        }while(next_permutation(s.begin(), s.end(), compare));

       // if(n != 0){
            cout << endl;
       // }
    }

	return 0;
}
