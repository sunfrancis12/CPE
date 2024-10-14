#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        map<int, map<int,int>> mp;
        int a,b,ans=0;

        for(int i=0;i<n;i++){
            cin>>a>>b;

            if( mp.count(b) && mp[b].count(a) && mp[b][a]>0){
                mp[b][a] -= 1;
                ans++;
            } else {
                if(!mp.count(a) || !mp[a].count(b)){
                    mp[a][b] = 1;
                } else {
                    mp[a][b]++;
                }
            }
        }

        cout<<ans<<endl;
        
    }
}