#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int a[3000];

    while(cin>>n){
        
        int last,now;
        bool j = true;

        for(int i=0;i<n;i++){
            a[i] = 0;
        }

        cin>>last;

        for(int i=1;i<=n-1;i++){
            cin>>now;
            a[abs(now-last)]++;
            last = now;
        }

        for(int i=1;i<=n-1;i++){
            if(a[i]!=1){
                j = false;
                break;
            }
        }

        if(j){
            cout<<"Jolly\n";
        }else{
            cout<<"Not jolly\n";
        }
    }

    return 0;
}