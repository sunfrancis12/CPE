#include<bits/stdc++.h>
using namespace std;

struct sen{
    char str[100];
    int length;
};

int main(){

    struct sen a[100];
    string str;
    int count=0,len=0;

    while(getline(cin,str)){

        for(int i=0;i<str.length();i++){
            a[count].str[i] = str[i];
        }

        if(str.length()>len) len = str.length();

        a[count].length = str.length();

        count++;
    }

    for(int i=0;i<len;i++){
        for(int j=count-1;j>=0;j--){
            if(i>=a[j].length){
                cout<<" ";
            }else{
                cout<<a[j].str[i];
            }
        }
        cout<<endl;
    }

}