#include<bits/stdc++.h>
using namespace std;

int n,m;

bool rule(int pre,int now){
    if(pre%m>now%m){
        return (pre%m)<(now%m);
    }else if(pre%m==now%m){
        if(pre%2==0 && now%2==0){ //都是偶數
            return (pre)<(now);
        }else if(pre%2!=0 && now%2!=0){ //都是基數
            return (pre)>(now);
        }else{
            return (pre %2);
        }
    }
}

int main(){

    while(cin>>n>>m){

        if(n==0 && m==0){
            cout<<"0 0";
            break;
        }

        int a[10000];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }     

        cout<<n<<" "<<m<<endl;

        sort(a,a+n,rule);

        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }

    }

}