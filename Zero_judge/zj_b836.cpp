#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){

        if(n==1 || m==1 || m==0){
            cout<<"Go Kevin!!\n";
            continue;
        }

        int num=0;

        while((num + 2/m) *(num-1) < (2*n - 2)/m){
            num++;
        }

        if((num + 2/m) *(num-1) == (2*n - 2)/m){
            cout<<"Go Kevin!!\n";
        }else{
            cout<<"No Stop!!\n";
        }

    }
}