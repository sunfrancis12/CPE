#include<bits/stdc++.h>
using namespace std;

vector<int> prime_list;

void prime(){
    int i=2;
    while(prime_list.back()<1000){

        if(i%2==0){
            i++;
            continue;
        }

        bool flag = true;
        for(int j=1;j<prime_list.size();j++){
            if(i%prime_list[j]==0){
                flag = false;
                break;
            }
        }
        if(flag) prime_list.push_back(i);
        
        i++;
    }
}

int main(){
    int n,c;
    prime_list.push_back(1);
    prime_list.push_back(2);

    //建表
    prime();
    
    while(cin>>n>>c){

        int temp = 0;

        while(prime_list[temp]<=n){
            temp++;
        }

        cout<<n<<" "<<c<<": ";

        if((2*c)>temp || (2*c -1)>temp){
            for(int i=0;i<temp;i++){
                cout<<prime_list[i]<<" ";
            }
            cout<<endl;
            continue;
        }

        if(temp%2==0){
            for(int i=(temp/2)-c;i<(temp/2)+c;i++){
                cout<<prime_list[i]<<" ";
            }
            cout<<endl;
        }else{
            for(int i=(temp/2)-c+1;i<(temp/2)+c;i++){
                cout<<prime_list[i]<<" ";
            }
            cout<<endl;
        }

    }
}