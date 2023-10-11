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

        int min,num,count=0,mid=(n-1)/2;
        
        //偶數
        if(n%2==0){
            if(a[mid] > a[mid + 1]){
                num = a[mid + 1];
            }else if(a[mid] < a[mid + 1]){
                num = a[mid];
            }else{
                num = a[mid];
            }

            for(int i=0;i<n;i++){
                if(a[i]==a[mid] || a[i]==a[mid+1]) count++;
            }
            
            min = a[mid+1] - a[mid] + 1;

        }else{  //基數
            min = 1;
            num = a[mid];

            for(int i=0;i<n;i++){
                if(a[i]==num){
                    count++;
                }
            }

        }

        cout<<num<<" "<<count<<" "<<min<<endl;
    }
}   