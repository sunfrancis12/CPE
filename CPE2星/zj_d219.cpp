#include<bits/stdc++.h>
using namespace std;

int sum=0;

long long mod(long long b, long long p,long long m){
    sum++;
    if(p==0) return 1;
    else if(p==1) return b%m;
    if(p%2==0){
        long long temp = mod(b,p/2,m)%m;
        return (temp * temp)%m;
    }else{
        long long temp = mod(b,p/2,m)%m;
        return (b * temp * temp)%m;
    }
}

int main(){
    long b,p,m;
    while(cin>>b>>p>>m){
        cout<<mod(b,p,m)<<endl;
        cout<<"sum: "<<sum<<endl;
        sum = 0;
    }
}