#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,ans;
    int count=0;
    int j=0;
    char a = char(39);

    getline(cin,str);

    cout<<str<<" "<<str.length()<<endl;

    for(int i=0;i<str.length();i++){
        /*
        if(str[i]=='"'){
            if(count%2==0){
                out[j] ='`';
                j++;
                out[j] ='`';
                j++;

                count++;
            }else{
                out[j] = a;
                j++;
                out[j] = a;
                j++;
            }
            continue;
        }
        */
        ans[j] = str[i];
        j++;
    }

    cout<<j;

    //cout<<output<<" ";


}