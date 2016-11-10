#include <bits/stdc++.h>

using namespace std;

map<int, int> col;
map<int, int> row;

int main(){
    int i, n, m;
    int arr[100][100];

    while(cin >> n && n){

        col.clear();
        row.clear();

        for(i=0; i<n; i++){
            int te=0;
            for(int j=0; j<n; j++){
                cin>> arr[i][j];
                te += arr[i][j];
            }
            if(te%2 != 0) row[i+1] = te;
        }

        for(i=0; i<n; i++){
            int te=0;

            for(int j=0; j<n; j++){
                te += arr[j][i];
            }
            if(te%2 !=0) col[i+1]=te;
        }
        map<int, int> :: iterator it;

        if(row.size()==0 && col.size() == 0){
            cout << "OK"<< endl;
        }
        else if(row.size() >=2 || col.size() >= 2){
            cout << "Corrupt" << endl;
        }
        else if(row.size()==1 && col.size()==1){
            cout <<"Change bit ";
            it = row.begin();
            cout <<"("<< it->first<<",";
            it = col.begin();
            cout << it->first<<")"<< endl;
        }
    }
	return 0;
}
