#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

vector<int> prime_list;

void prime(){
    for(int i=2;i<=2001;i++){
        bool flag = true;
        for(int j=0;j<prime_list.size();j++){
            if(i%prime_list[j]==0){
                flag = false;
                break;
            }
        }

        if(flag) prime_list.push_back(i);
    }
}

int main(){
    prime_list.push_back(2);
    prime();
    string str;
    int sum=0,t;
    //cout<<prime_list.size();
    cin>>t;
    getline(cin,str);
    while(t--){
        map<char,int> total;
        string ans;
        getline(cin,str);
        sum++;
        for(int i=0;i<str.length();i++) total[str[i]]++;

        for(auto i: total){
            if(i.second==1) continue;

            bool flag = false;
            for(int j=0;prime_list[j]<=i.second && j<prime_list.size();j++){
                if(i.second==prime_list[j]){
                    flag = true;
                    break;
                }
            }

            if(flag) ans += i.first;
        }

        if(ans.length()==0) cout<<"Case "<<sum<<": empty\n";
        else cout<<"Case "<<sum<<": "<<ans<<endl;
    }


}