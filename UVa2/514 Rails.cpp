/* Problem: 514 Rails
*/
#include<bits/stdc++.h>

using namespace std;

stack <int> stc;
queue <int> q;

int main(){
    int i, m, n;
    int coach;

    while(scanf("%d", &coach) && coach){
        stc = stack<int>();
        q = queue<int>();

        while(1){
            stc = stack<int>();
            q = queue<int>();

            cin>> n;
            q.push(n);

            if(n == 0){
                cout<< endl;
                break;
            }
            for(i=1; i<coach; i++){
                cin>> n;
                q.push(n);
            }

            m = 1;
            while(m<=coach){
                stc.push(m);

                while(!stc.empty() && stc.top()==q.front()){
                    stc.pop();
                    q.pop();
                }
                m++;
            }
            if(stc.size()==0){
                cout<<"Yes"<<endl;
            }
            else{
                cout <<"No"<<endl;

            }
        }

    }


    return 0;
}
