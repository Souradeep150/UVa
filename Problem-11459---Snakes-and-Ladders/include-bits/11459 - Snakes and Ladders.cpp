/* Problem: 11459 - Snakes and Ladders
*/
#include<bits/stdc++.h>

using namespace std;

string toLower(string str){
    string ss= "";
    for(int a = 0; a<str.length(); a++){
        ss += tolower(str[a]);
    }
    return ss;
}

int player[1000001];
int send[101];

int main(){
	int n, m, i;

	int Case, k, x, y;

	cin >> Case;

	while(Case--) {

        scanf("%d %d %d", &n, &m, &k);
        for (i=1; i<=n; i++){
			player[i] = 1;
		}
        for (i=1; i<= 100; i++){
			send[i] = 0;
		}
        while (m--) {
            scanf("%d %d", &x, &y);
            send[x] = y;
        }
        int p = 1;
        bool over = false;

        while (k--) {
            scanf("%d", &x);
            if (over) continue;
            player[p] = min(player[p] + x, 100);

            if (send[player[p]])
                player[p] = send[player[p]];
            if (player[p] == 100) over = true;
            p = p%n + 1;
        }
        for(i=1; i<=n; i++){
            printf("Position of player %d is %d.\n", i, player[i]);
        }
    }

    return 0;
}
