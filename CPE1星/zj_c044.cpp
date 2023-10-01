#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    int count[91]={0};

    cin>>n;
    n+=1;

    while(n--){

        getline(cin,str);

        for(int j=0;j<str.length();j++){
            //轉大寫
            if(str[j]>='a' && str[j]<='z'){
                str[j]-=32;
            }

            if(str[j]>='A' && str[j]<='Z'){
                count[str[j]]++;
            }
        }
    }
    
    for(int i=1;i<=26;i++){
        int big = 0;
        for(int j=65;j<=90;j++){
            if(count[j]==0){
                continue;
            }

            if(count[j] > count[big]){
                big = j;
            }
        }
        if(big==0) break;

        cout<<char(big)<<" "<<count[big]<<endl;
        count[big] = 0;
    }

}