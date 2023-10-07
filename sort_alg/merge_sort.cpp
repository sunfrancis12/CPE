#include<bits/stdc++.h>
using namespace std;

//將兩個陣列排序並合併 Counter
void merge_sort(int start,int index,int end,vector<int> &arr){

    vector<int> right(arr.begin()+index+1,arr.begin()+end+1);
    vector<int> left(arr.begin()+ start,arr.begin()+index+1);

    //設定邊界
    int MAX = 100000;
    right.push_back(MAX); 
    left.push_back(MAX);

    int right_p = 0; //右邊陣列的指標
    int left_p = 0; //左邊陣列的指標

    for(int i=start;i<=end;i++){
        if(right[right_p]<left[left_p]){
            arr[i] = right[right_p];
            right_p++;
        }else{
            arr[i] = left[left_p];
            left_p++;
        }
    }

}

//分割陣列 Devide
void merge(int start ,int end,vector<int> &arr){

    if(end>start){
        int index = (start+end)/2; //找出中點，切割陣列
        merge(start,index,arr);
        merge(index+1,end,arr);
        merge_sort(start,index,end,arr);
    }
}

int main(){
    int n,num;
    vector<int> a;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }

    //印出輸入內容
    cout<<"input:"<<endl;
    cout<<"| ";
    for(int k=0;k<n;k++){
        cout<<a[k]<<" | ";
    }
    cout<<endl;


    //執行merge sort
    merge(0,n-1,a);

    cout<<"sort:"<<endl;
    cout<<"| ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" | ";
    }
}