#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> mp;
    char c = ' ';
   
    while(cin>>c){
        cout<<c<<" ";
        mp[c]++;
    }
    cout<<endl;

    for(auto i : mp){
        cout<<int(i.first)<<" "<<i.second<<endl;
    }
}