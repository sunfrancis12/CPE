#include<iostream>
using namespace std;

int main(){
    int n,m,k,lucky = 0;
    cin>>n>>m>>k;

    for(int i=n-k+1;i<=n;i++){
        lucky += m;
        lucky = lucky%i;
    }

    cout<<lucky+1;
}