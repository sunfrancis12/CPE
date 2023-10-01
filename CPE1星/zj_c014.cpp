#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1=1,n2=1;
    int count,temp;

    while(cin>>n1>>n2){

        if(n1==0 && n2==0) break;

        count = 0;
        temp = 0;

        while(n1>0 || n2>0){
            if((n1%10 + n2%10 + temp)>=10){
                count++;
                n1 /= 10;
                n2 /= 10;
                temp = 1;
            }else{
                n1 /= 10;
                n2 /= 10;
                temp = 0; 
            }
        }

        if(count==0){
            cout<<"No carry operation."<<endl;
        }else if(count==1){
            cout<<count<<" carry operation."<<endl;
        }else{
            cout<<count<<" carry operations."<<endl;
        }
    }
}