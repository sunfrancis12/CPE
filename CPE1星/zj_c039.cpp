#include<bits/stdc++.h>
using namespace std;

void loop(int n,int* p){

    *p +=1;

    if(n==1) return;

    if(n%2==1){
        n = 3*n+1;
    }else{
        n = n/2;
    }

    loop(n,p);

}

int main(){
    int input1,input2,start,end;
    int num=0,temp,ans=0;
    int *p = &num;

    while(cin>>input1>>input2){

        if(input1>input2){
            start = input2;
            end = input1;
        }else{
            start = input1;
            end = input2;
        }

        for(int i=start;i<=end;i++){
            loop(i,p);

            if(num>ans) ans = num;
            num =0;
        }

        cout<<input1<<" "<<input2<<" "<<ans<<endl;

        ans = 0;

    }

    
}