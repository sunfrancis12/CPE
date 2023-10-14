#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n;
    getline(cin,str);
    getline(cin,str);

    while(n--){
        map<string,int> mp;
        int count=0;

        while(getline(cin,str) && str!=""){
            mp[str]++;
            count++;
        }

        for(auto i: mp){
            cout<<i.first<<" ";
            cout<<fixed<<setprecision(4)<<(double(i.second)/count) * 100<<endl;
        }
    }
}