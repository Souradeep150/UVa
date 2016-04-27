#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<string>

using namespace std;

queue<long long>l;
queue<long long>r;

int main()
{

    long long n,t,i,m,j,value;
    cin>>t;
    string name;

    while(t--){

        cin>>n>>m;
        n=n*100;
        for(i=1; i<=m; i++){

            cin>>value>>name;

            if(name=="left")
                l.push(value);
            else
                r.push(value);
        }
        long long  counter=0,sum=0;
        long long x;
        int check = 0;

        while(1){

            check=0;
            if(l.size()>0){

                sum=0;
                while(!l.empty()){

                    x=l.front();
                    sum=sum+x;
                    if(sum<=n){
                        l.pop();
                    }
                    else
                        break;
                }

            }
            counter++;
            if(r.size()>0){

                sum=0;
                while(!r.empty()){

                    x=r.front();
                    sum=sum+x;
                    if(sum<=n){
                        check=1;
                        r.pop();

                    }
                    else{
                        break;
                    }

                }
            }
            if(check == 1 || l.size()>0)
                counter++;
            if(l.size()==0 && r.size()==0)
                break;

        }
        cout<<counter<< endl;


    }

    return 0;

}
