#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(cin>>str){
       
        if('0'<=str[0]<='9'){
            int max=0;
            for(int i=0;i<str.length();i++){
                if('0'>str[0] || str[0]>'9'){
                    cout<<"such number is impossible!"<<endl;
                    break;
                }

                if(str[0]-'0'>max) max = str[0]-'0';
            }

            cout<<max + 1<<endl;
            
        }else if('A'<=str[0]<='Z'){
             int max=0;
            for(int i=0;i<str.length();i++){
                if('A'<=str[0]<='Z' || '0'<=str[0]<='9'){
                    if(str[0]-'A'>max) max = str[0]-'A';
                }else{
                  cout<<"such number is impossible!"<<endl;
                  break;  
                }
            }

            cout<<max+1<<endl;

        }else if('a'<=str[0]<='z'){
            int max=0;
            for(int i=0;i<str.length();i++){
                if('A'<=str[0]<='Z' || '0'<=str[0]<='9' || 'a'<=str[0]<='z'){
                    if(str[0]-'a'>max) max = str[0]-'a';
                }else{
                  cout<<"such number is impossible!"<<endl;
                  break;  
                }
            }

            cout<<max+1<<endl;

        }else{
           cout<<"such number is impossible!"<<endl; 
        }
        
    }
}

//|| 'a'<=str[i]<='z' || 'A'<=str[i]<='Z'