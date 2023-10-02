#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int day,num,rest=0,party[100];
        cin>>day>>num;

        for(int i=0;i<num;i++){
            cin>>party[i];
        }

        for(int i=1;i<=day;i++){
            if((i-6)%7==0 || i%7==0) continue;
            for(int j=0;j<num;j++){
                if(i%party[j]==0){
                    rest++;
                    break;
                }
            }
        }

        cout<<rest<<endl;
    }
}