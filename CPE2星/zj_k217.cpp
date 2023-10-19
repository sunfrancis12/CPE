#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,len=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int start=1;

        for(int i=0;i<n-1;i++){
            if(start%2==1){
                if(a[i]>a[i+1]){
                    start++;
                }else{
                    if(start>len) len = start;
                    start = 1;
                }
            }else{
               if(a[i]<a[i+1]){
                    start++;
                }else{
                    if(start>len) len = start;
                    start = 1;
                } 
            }
        }

        if(start>len) len = start;
        cout<<len<<endl;

    }
}