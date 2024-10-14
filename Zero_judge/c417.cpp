#include<iostream>
#include<algorithm>
using namespace std;

struct object{
    int w,f;
};

int cmp(object a, object b){
    return a.w * b.f < b.w * a.f;
}

int main(){
    int n;
    long long total_w=0, sum=0;
    cin>>n;
    object b[n];

    for(int i=0;i<n;i++){
        cin>>b[i].w;
    }

    for(int i=0;i<n;i++){
        cin>>b[i].f;
    }

    sort(b, b+n, cmp);

    for(int i=0;i<n-1;i++){
        total_w += b[i].w;
        sum += total_w * b[i+1].f;
    }

    cout<<sum;

}