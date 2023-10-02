#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int num,player;
        double p,r,a1,result;

        cin>>num>>p>>player;
        
        a1 = (p * pow(1-p,player-1));
        r = (pow(1-p,num));

        result = a1/(1-r);

        cout<<fixed<<setprecision(4)<<result<<endl;

    }
}