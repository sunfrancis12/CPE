#include<bits/stdc++.h>
using namespace std;

int* insertion(int n , int arr[]){
    //min為最小值的位置
    int min,temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                //印出交換的數字
                cout<<"switch"<<" "<<arr[j]<<" "<<arr[i]<<endl;

                //交換
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;

                //印出當前排序結果
                cout<<"| ";
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" | ";
                }
                cout<<endl;
            }           
        }
    }

    return arr;
}

int main(){
    int n ,a[100];
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

    //執行insertion sort
    p = insertion(n,a);
    
    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
}