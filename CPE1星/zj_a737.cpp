#include<bits/stdc++.h>
using namespace std;

int a[30000];

void bubble_sort(int num){
    //排序
    for(int i=0;i<num-1;i++){
        for(int j=1;j<num;j++){
            if(a[j]<a[j-1]) swap(a[j],a[j-1]);
        }
    }
}

int main(){
    int n;

    cin>>n;

    while(n--){
        int num;
        
        cin>>num;

        for(int i=0;i<num;i++){
            cin>>a[i];
        }

        bubble_sort(num);

        int range = 0; //中位數

        for(int i=0;i<num;i++){
            range += abs(a[(num+1)/2-1] - a[i]);
        }

        cout<<range<<endl;
    }    

    return 0;
}