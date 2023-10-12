#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        float flag;
        flag = (2*n - 2)/m + 1;

        if(flag>int(flag)){ //非整數
            cout<<"No Stop!!\n";
        }else{
            cout<<"Go Kevin!!\n";
        }
    }
}