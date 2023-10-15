#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n;
    map<string,int> mp;
    getline(cin,str);

    while(n--){
        string country;
        getline(cin,str);

        for(int i=0;i<str.length();i++){
            if(str[i]==' ') break;
            country.push_back(str[i]);
        }

        mp[country]++;
    }

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}