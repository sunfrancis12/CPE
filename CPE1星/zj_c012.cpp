#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    
    while(getline(cin,str)){
        int asc[256],max=0;

        for(int i=0;i<256;i++){
            asc[i]=0;
        }

        for(int i=0;i<str.length();i++){
            asc[str[i]]++;
            if(asc[str[i]]>max){
                max = asc[str[i]];
            }
        }

        for(int i=1;i<=max;i++){
            int count=0;

            for(int j=0;j<256;j++){
                if(asc[j]==i) count++;
            }

            //cout<<"count: "<<count<<endl;

            for(int j=127;j>=0;j--){
                if(asc[j]==i) cout<<j<<" "<<asc[j]<<endl;
            }  
            
        }
    }
}