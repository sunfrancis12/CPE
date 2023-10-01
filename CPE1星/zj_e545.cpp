#include<bits/stdc++.h>
//#include<bitset>
using namespace std;

int main(){

    int num; //次數
    cin>>num;

    while(num--){
        int n;//輸入n

        cin>>n;

        bitset<16> x1(n); //創立一個可以儲存13bit的空間，並初始化(將n轉成二進位並儲存至x1)
        //cout<<x1; //可以試試印出x1

        int count_x1 = x1.count(); //bitset內建函式，可以計算bitset裡總共有多少1

        int hex = 0; //儲存n(16進位)轉換成10進位的整數

        //16進制轉10進制
        for(int i = 0;n>0;i++){
            hex += (n%10)*pow(16,i);
            n = n/10; 
        }

        bitset<16> x2(hex); //初始化

        int count_x2 = x2.count(); //bitset內建函式，可以計算bitset裡總共有多少1

        cout<<count_x1<<" "<<count_x2<<endl;
    }

}