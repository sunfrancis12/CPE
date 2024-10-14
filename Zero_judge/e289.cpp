#include<bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);   

    int m,n,ans = 0, type = 0;
    queue<string> que;
    unordered_map<string ,int> mp;
    cin>>m>>n;

    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        que.push(temp);
        mp[temp]++;

        if(i>=m){
            string front = que.front();
            que.pop();
            mp[front]--;
            if(mp[front]==0) mp.erase(front);
        }

        if(mp.size()==m) ans++;
    }
    cout<<ans;
}