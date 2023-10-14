#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    char a1[1000],a2[1000];

    while(cin>>str1>>str2){
        string ans="1";
        for(int i=0;i<str1.length();i++){
            a1[i] = str1[i];
        }

        for(int i=0;i<str2.length();i++){
            a2[i] = str2[i];
        }

        sort(a1,a1 + str1.length());
        sort(a2,a2 + str2.length());
        

        for(int i=0;i<str1.length();i++){
            string temp="1";
            for(int j=0;j<str2.length();j++){
                int count=0;
                if(a1[i]==a2[j]){
                    int a1_count=i;
                    int a2_count=j;
                    while(a1[a1_count]==a2[a2_count]){
                        temp[count] = a1[a1_count];
                        cout<<a1[a1_count]<<" "<<a2[a2_count]<<" one"<<endl;
                        a1_count++;
                        a2_count++;
                        cout<<a1[a1_count]<<" "<<a2[a2_count]<<endl;
                        count++;
                    }
                }
            }
            if(temp.length()>ans.length() || ans=="1"){
                ans = temp;
            }
        }

        cout<<ans<<endl;
    }
}