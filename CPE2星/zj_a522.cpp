#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,bar;
        cin>>n>>p;
        int dp[p+1][n+1];

        for(int i=0;i<=n;i++){
            dp[0][i]=0;
        }

        for(int i=1;i<=p;i++){
            cin>>bar;
            for(int j=0;j<=n;j++){
                if(j==0){
                    dp[i][j] = 0;
                    continue;
                }

                if(bar>j) dp[i][j] = dp[i-1][j];
                else dp[i][j] = max(dp[i-1][j],dp[i-1][j-bar] + bar);
            }
        }

        if(n==0){
            cout<<"YES\n";
            continue;
        }

        bool flag = false;

        for(int i=1;i<=p;i++){
            for(int j=1;j<=n;j++){
                 if(n==dp[i][j]){
                    flag = true;
                    break;
                 }
            }
        }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }


    }
}