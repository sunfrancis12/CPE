#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> fence_height;
vector<int> poster_wide;

bool check_poster_fit(int poster_height){
    vector<int> fence_wide;
    int wide = 0,poster_count = 0;

    for(int i=0;i<n;i++){

        if(fence_height[i] >= poster_height){
            wide++;
        }
        else if(wide != 0){
            fence_wide.push_back(wide);
            wide = 0;
        }
        
        if(i==n-1) fence_wide.push_back(wide);
    }

    // cout<<"poster wide: ";
    // for(auto i: fence_wide){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    for(int i = k-1; i>=0 ; i--){

        if(fence_wide.empty()) return poster_count == k;

        while(fence_wide.back() - poster_wide[i] < 0){
            fence_wide.pop_back();
            if(fence_wide.empty()) return poster_count == k;
        }

        if(fence_wide.back() - poster_wide[i] >= 0){
            poster_count++;
            fence_wide.back() -= poster_wide[i];
        }
        
    }

    return poster_count == k;
}

int main(){
    int h;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>h;
        fence_height.push_back(h); 
    }

    for(int i=0;i<k;i++){
        cin>>h;
        poster_wide.push_back(h);
    }


    int left = 1, right = 1e9, ans = 0;
    //cout<<endl;

    while(left<=right){
        int mid = (left+right)/2;
        //cout << "目前查找範圍: [" << left << ", " << right << "], 中間值: " << mid << endl;

        if(check_poster_fit(mid)){
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout<<ans;
}