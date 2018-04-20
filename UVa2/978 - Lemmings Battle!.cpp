/* 
Date: 06.05.16
Problem: 978 - Lemmings Battle!
*/
#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

priority_queue<int> g;
priority_queue<int> b;
vector<int > vgreen;
vector<int > vblue;

int main(void)
{
   int battle, green, blue;
   int i, x, n, t, p = 0;

   cin >> t;

   while(t--){
    if(p){
        cout << endl;
    }

    cin >> battle >> green >> blue;

    for(i=0; i<green; i++){
        cin>> x;
        g.push(x);
    }
    for(i=0; i<blue; i++){
        cin>> x;
        b.push(x);
    }
    while(1){
        if(g.size() == 0 && b.size() == 0 ){
            cout << "green and blue died"<< endl;
            break;
        }
        else if(g.size()== 0){
            n = b.size();
            cout<< "blue wins"<< endl;
            for(i=0; i<n; i++){
                cout<< b.top() << endl;
                b.pop();
            }
            break;
        }
        else if(b.size()== 0){
            n = g.size();
            cout<< "green wins"<< endl;
            for(i=0; i<n; i++){
                cout<< g.top() << endl;
                g.pop();
            }
            break;
        }
        for(i=0; i<battle; i++){
            if(g.size() == 0 || b.size() == 0) break;
            n = g.top() - b.top();
            g.pop();
            b.pop();
            if(n > 0){
                vgreen.push_back(n);
            }
            else if(n < 0){
                vblue.push_back(abs(n));
            }
        }
        for(i=0; i<vgreen.size(); i++){
            g.push(vgreen[i]);
        }
        for(i=0; i<vblue.size(); i++){
            b.push(vblue[i]);
        }
        vgreen.clear();
        vblue.clear();
    }
    p = 1;

   }

   return 0;
}
