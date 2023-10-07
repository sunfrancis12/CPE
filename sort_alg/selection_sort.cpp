#include<bits/stdc++.h>
using namespace std;

int* selecetion(int n , int arr[]){
    //min為最小值的位置
    int min,temp;
    for(int i=0;i<n-1;i++){

        //重設min
        min = i;

        for(int j=i;j<n;j++){
            //找出最小值，並記錄其陣列中的位置
            if(arr[j]<arr[min]){
                min = j;
            }           
        }

        //印出交換的數字
        cout<<"switch"<<" "<<arr[min]<<" "<<arr[i]<<endl;

        //交換
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

        //印出當前排序結果
        cout<<"| ";
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" | ";
        }
        cout<<endl;
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


    //執行selecetion sort
    p = selecetion(n,a);

    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
}