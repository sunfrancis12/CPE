#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=0;
    cin>>num;
    vector<int> vec(num);

    for(int i=0;i<num;i++){
        cin>>vec[i];
    } 

    sort(vec.begin(),vec.end());

    for(auto i : vec){
        if(i == vec.size()){ cout<<i; break;}
        cout<<i<<" ";
    }
}