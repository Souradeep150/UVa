/* Date: 17.04.16
Problem: 10409 - Die Game
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <set>
#include <algorithm>

#define length 10000
#define  ll long long

using namespace std;

typedef vector <int> IntContainer;
typedef IntContainer :: iterator IntIterator;


int main(){

	int t, i, temp;
	int top, east, west, south, north;
	string s;

	while(scanf("%d", &t) && t != 0){
        top = 1;
        east = 4;
        west = 3;
        north = 2;
        south = 5;

        for(i=0; i<t; i++){
			cin >> s;
			if(s == "east"){
				west = 7 - top;
				temp = east;
				east = top;
				top = 7- temp;

			}
			else if(s == "north"){
				south = 7 - top;
				temp = north;
				north = top;
				top = 7 - temp;

			}
			else if(s == "south"){
				north = 7 - top;
				temp = south;
				south = top;
				top = 7 - temp;

			}
			else if(s == "west"){
				east = 7 - top;
				temp = west;
				west = top;
				top = 7 - temp;

			}

        }
        cout << top << endl;
	}

	return 0;
}
