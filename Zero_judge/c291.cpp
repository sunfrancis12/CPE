#include<iostream>
using namespace std;

int parent[50000];

int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

void unite(int x, int y){
    x = find(x); y = find(y);
    if(x<=y) parent[x] = y;
    else parent[y] = x;
}

int main(){
    int n, ans = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        parent[i] = i;
    }

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        unite(input, i);
    }
    
    for(int i=0;i<n;i++){
        find(i);
    }

    for(int i=0;i<n;i++){
        if(parent[i]==i) ans++;
    }

    cout<<ans;
}