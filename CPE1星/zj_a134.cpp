#include<bits/stdc++.h>
using namespace std;

int base[1000];

int f_fibo(int n){
    if(base[n]) return base[n];

    if(n==1 || n==2){
        return 1;
    }else{
        base[n] = f_fibo(n-1) + f_fibo(n-2);
        return base[n];
    }
}

void fib(int n){

    if(n==1){
        cout<<"1";
        return;
    }

    if(n==2){
        cout<<"10";
        return;
    }
    
    int big = 1; //最大數
    char ans[1000];
    int digit = 0;

    //找尋最高位數
    while(n>=f_fibo(big)){
        big++; //base陣列中位置
    }

    big--;

    int total_digit = big;

    for(int i=0;i<big;i++){
        ans[i] = '0';
    }

    while(n>0){
        int temp = f_fibo(big);

        if(n >= temp){
            n -= temp;
            ans[digit] = '1';
            digit++;
            big--;
        }else{
            ans[digit] = '0';
            digit++;
            big--;
        }
    }

    for(int i=0;i<total_digit;i++){
        cout<<ans[i];
    }

}

int main(){
    int n,a[500],ans;

    base[1] = 1;
    base[2] = 2;

    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" = ";

        fib(a[i]);

        cout<<" (fib)"<<endl;
    }
    
}