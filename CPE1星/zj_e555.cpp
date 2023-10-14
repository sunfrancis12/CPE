#include<bits/stdc++.h>
using namespace std;

int main(){
    long long day;
    int n;
    
    while(cin>>n>>day){
        int num = n;
        while(day>n){
            day -= n;
            n = n+1;
            num++;
        }

        cout<<num<<endl;
    }
}