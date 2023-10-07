#include<bits/stdc++.h>
using namespace std;

int* exchange(int n , int arr[]){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){

            //如果比較大則交換
            if(arr[j]<arr[i]){

                //印出交換的數字
                cout<<"switch"<<" "<<arr[j]<<" "<<arr[i]<<endl;

                //交換
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                //印出當前排序結果
                cout<<"| ";
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" | ";
                }
                cout<<endl;

                // 回到交換起點
                j = i;
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

    //執行exchange sort
    p = exchange(n,a);

    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
}