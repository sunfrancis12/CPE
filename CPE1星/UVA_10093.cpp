#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    while(cin>>str){

        int max=0;
        bool flag = true;
        for(int i=0;i<str.length();i++){
            if(('0'<=str[i] && str[i]<='9') || ('A'<=str[i] && str[i]<='Z') || ('a'<=str[i] && str[i]<='z') ){
                if(str[i]-'0'>max) max = str[i]-'0';
            }else{
                flag = false;
                break;  
            }
        }

        if(max<1){
            cout<<"such number is impossible!"<<endl; 
            continue;
        }

        if(max>=49){ //a-z
            max -= 6; 
        }if(max>9){ //A-Z
            max -= 7;
        }

        if(flag){
            cout<<max + 1<<endl;
        }else{
            cout<<"such number is impossible!"<<endl; 
        }     
        
    }
}