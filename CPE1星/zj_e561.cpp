#include<bits/stdc++.h>
using namespace std;

int swap(int n,int arr[]){

    int temp,count=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                count++;
            }
        }
    }
    return count;
}

int main(){
    int num,n,count,a[50];

    cin>>num;

    while(num>0){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        count = swap(n,a);

        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;

        num--;
    }
}