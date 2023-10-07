#include<bits/stdc++.h>
using namespace std;

void merge_sort(int start,int index,int end, vector<int> &arr){
    vector<int> left(arr.begin() + start,arr.begin() + index + 1);
    vector<int> right(arr.begin() + index + 1,arr.begin() + end + 1);

    int MAX = 65536;
    left.push_back(MAX);
    right.push_back(MAX);

    int left_p = 0;
    int right_p = 0;

    for(int i=start;i<=end;i++){
        if(left[left_p]>right[right_p]){
            arr[i] = right[right_p];
            right_p++;
        }else{
            arr[i] = left[left_p];
            left_p++;
        }
    } 
}

void merge(int start, int end, vector<int> &arr){
    if(end>start){
        int index = (start+end)/2;
        merge(start,index,arr);
        merge(index+1,end,arr);
        merge_sort(start,index,end,arr);
    }
}

int main(){
    int n;

    while(cin>>n){
        int input;
        vector<int> a;

        for(int i=0;i<n;i++){
            cin>>input;
            a.push_back(input);
        }

        merge(0,n-1,a);

        int min,count=0,mid=(n-1)/2;
        
        if(n%2==0){
            if(a[mid]!=a[mid + 1]){
                min = 2;
            }

            int j = mid - 1;

            while(j==a[(n-1)/2]){
                count++;
                j--;
            }

            int j = (n-1)/2 - 1;

            cout<<a[(n-1)/2]<<" ";
        }else{
            min = 1;
            cout<<a[(n-1)/2]<<" ";
        }

    }
}