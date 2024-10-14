#include<iostream>
#include<vector>
#include<algorithm>
#include<initializer_list>
using namespace std;

int find(int input[], int presum[], int l, int r){
    if(r - l <= 1){
        return input[l];
    }

    int mid = (l+r)/2;
    int l_max = find(input, presum, l, mid);
    int r_max = find(input, presum, mid, l);

    int l_premin = presum[l];
    int r_premax = presum[r];

    for(int i=l;i<mid;i++){
        l_premin = min(presum[i], l_premin);
    }

    for(int i=mid;i<r;i++){
        r_premax = max(presum[i], r_premax);
    }

    return max({l_max, r_max, r_premax - l_premin});
}

int main(){
    int n;
    cin>>n;

    while(n--){
        int m,x, input[100], presum[101];
        cin>>m;

        for(int i=0;i<m;i++){
            cin>>input[i];
        }

        presum[0] = 0;

        for(int i=0;i<m;i++){
            presum[i+1] = input[i] + presum[i];
        }

        cout<<find(input, presum, 0, m)<<endl;

    }
}