#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a[40],l,count=0,sum=0;
        while(cin>>l){
            if(l==0) break;
            a[count] = l;
            count++;
        }

        sort(a,a+count,greater<int>());

        bool flag = false;
        for(int i=0;i<count;i++){
            sum+= 2*(pow(a[i],i+1));
            if(sum>5000000){
                flag = true;
                break;
            }
        }

        if(flag){
            cout<<"Too expensive\n";
        }else{
            cout<<sum<<endl;
        }


    }
}