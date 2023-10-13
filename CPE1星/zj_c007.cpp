#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    char c[1000];
    int count=0;
    int j=0;

    while(getline(cin,str)){
        for(int i=0;i<str.length();i++){
            if(str[i]=='"'){
                if(count%2==0){
                    c[j] ='`';
                    c[j+1] ='`';
                    j+=2;
                    count++;
                }else{
                    c[j] = char(39); // ' 
                    c[j+1] = char(39);
                    j+=2;
                    count++;
                }
                continue;
            }

            c[j] = str[i];
            j++;
        }

        for(int i=0;i<j;i++){
            cout<<c[i];
            c[i] = '\0';
        }

        j=0;

        cout<<endl;
    }

}