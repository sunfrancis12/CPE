#include<bits/stdc++.h>
using namespace std;

int* bubble(int n,int arr[]){

    for(int i=0;i<n-1;i++){
        int temp = 0;
        for(int j=1;j<n;j++){

            //交換
            if(arr[j-1]>arr[j]){
                 //印出交換的數字
                cout<<"switch"<<" "<<arr[j-1]<<" "<<arr[j]<<endl;

                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;

                //印出當前排序結果
                cout<<"| ";
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" | ";
                }
                cout<<endl;
            }
        }
        if(temp ==0) return arr;
    }
    return arr;
}

int main(){
    int n,a[100];
    int *p = a;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //印出輸入內容
    cout<<"input:"<<endl;
    cout<<"| ";
    for(int k=0;k<n;k++){
        cout<<a[k]<<" | ";
    }
    cout<<endl;


    //執行selecetion sort
    p = bubble(n,a);

    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
}