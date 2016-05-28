/* Problem: 11878 - Homework Checker
 */
#include<bits/stdc++.h>
#define LL long long

using namespace std;

queue<int> v;

int main(){
    char c[10];
    int tc, i, n;
    int a, b, d;
    char sign, eq;
    int correct = 0;

    while(scanf("%d %c %d %c %s", &a, &sign, &b, &eq, c) != EOF){

        if(sign == '+'){
            if(a+b == atoi(c)){
                correct++;
            }
        }
        else{
            if(a-b == atoi(c)){
                correct++;
            }
        }

    } cout << correct<< endl;


    return 0;
}


