#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,d,l;

    while(cin>>a>>b>>c>>d>>l){
        if(a==0 && b==0 && c==0 && d==0 && l==0) break;

        int sum=0,temp;

        for(int i=0;i<=l;i++){
            temp = a*pow(i,2) + b*i + c;
            if(temp%d==0) sum++;
        }

        cout<<sum<<endl;

    }
}