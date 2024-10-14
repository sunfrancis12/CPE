#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, string> mp;

    mp["HELLO"] = "ENGLISH";
    mp["HOLA"] = "SPANISH";
    mp["HALLO"] = "GERMAN";
    mp["BONJOUR"] = "FRENCH";
    mp["CIAO"] = "ITALIAN";
    mp["ZDRAVSTVUJTE"] = "RUSSIAN";

    string str;
    cin>>str;

    for(int i=1;str!="#";i++){
        cout<<"Case "<<i<<": ";
        if(mp.count(str)) cout<<mp[str]<<endl;
        else cout<<"UNKNOWN"<<endl;
        cin>>str;
    }
}