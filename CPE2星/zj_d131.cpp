#include<iostream>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;

vector<int> prime_list;

void prime(){
    for(int i=3;i<=100;i++){
        bool flag = true;
        for(int j=0;j<prime_list.size();j++){
            if(i%prime_list[j]==0){
                flag = false;
                break;
            }
        }

        if(flag) prime_list.push_back(i);
    }
}

int main(){
    prime_list.push_back(2);
    prime();

    int n;
    while(cin>>n){
        if(n==0) break;
        if(n==2){
            cout<<n<<"! =";
            cout<<"  1\n";
            continue;
        }

        map<int,int> num_list;

        for(int i=2;i<=n;i++){
            int temp = i;
            for(int j=0;1<temp;j++){
                if(temp%prime_list[j]==0){
                    temp /= prime_list[j];
                    num_list[prime_list[j]]++;
                    j--;
                }
            }
        }

        cout<<n<<"! =";

        int count=0;
        for(auto i: num_list){
            cout<<setw(3)<<i.second;
            count++;
            if(count==15){
                cout<<endl;
                if( 100>n && n>=10)cout<<"     ";
                else if(n=100)cout<<"      ";
                count = 0;
            }
        }

        if(count!=0) cout<<endl;
        
    }

}