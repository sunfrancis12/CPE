#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> mp;
    vector<int> vec;
    int arr[10];

    for(int i=10;i>=0;i--){
        vec.push_back(i);
    }

    for(auto i : vec){
        cout<<" "<<i;
    }
    cout<<endl;

    sort(vec.begin(),vec.end());

    for(auto i : vec){
        cout<<" "<<i;
    }
    cout<<endl;

    while(!vec.empty()){
        cout<<vec.front();
        vec.pop_back();
    }

}