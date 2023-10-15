#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin>>n && n!=0){
        bitset<32> b(n);
        cout<<"The parity of ";

        int i=31;
        while(b[i]==0){
            i--;
        }
        while(i>=0){
            cout<<b[i];
            i--;
        }

        cout<<" is "<<b.count()<<" (mod 2)."<<endl;
    }
}