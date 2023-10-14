#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;

    cin>>n;

    while(n--){
        string s1,s2;
        cin>>s1>>s2;
        count++;

        if(s1=="0" || s2=="0"){
            cout<<"Pair #"<<count<<": Love is not all you need!"<<endl;
            continue;
        }

        bitset<30> b1(s1);
        bitset<30> b2(s2);

        if(!(b1.test(0)) && !(b2.test(0))){
            cout<<"Pair #"<<count<<": All you need is love!"<<endl;
            continue;
        }

        long n1 = b1.to_ulong();
        long n2 = b2.to_ulong();
        long big,sml;

        b1.reset();
        b2.reset();

        if(n1>n2){
            big = n1;
            sml = n2;
        }else{
            big = n2;
            sml = n1;
        }

        while(sml>1){
            big -= sml * (big/sml);
            sml -= big * (sml/big);
        }

        if(sml==0){
            cout<<"Pair #"<<count<<": All you need is love!"<<endl;
        }else{
            cout<<"Pair #"<<count<<": Love is not all you need!"<<endl;
        }

    }
}