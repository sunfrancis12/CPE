#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        string str1,str2;
        cin>>str1>>str2;
        int n;
        cin>>n;
        long long a[n*n];
        for(int i=0;i<n*n;i++){
            cin>>a[i];
        }

        if(n==1 && a[0]>0){
            cout<<"Test #"<<j<<": Symmetric.\n";
            continue;
        }else if(n==1 && a[0]<0){
            cout<<"Test #"<<j<<": Non-symmetric.\n";
            continue; 
        }

        bool flag = false;

        for(int i=0;i<=(n*n)/2;i++){
            if(a[i]!=a[n*n-1-i] ||a[i]<0){
                flag = true;
                break;
            }
        }

        if(flag) cout<<"Test #"<<j<<": Non-symmetric.\n";
        else cout<<"Test #"<<j<<": Symmetric.\n";
    }
}