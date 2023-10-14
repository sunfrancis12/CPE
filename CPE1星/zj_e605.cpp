#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,count=0;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    while(cin>>n>>m){
        if(n==0 || m==0) break;

        char a[102][102],input;
        count++;

        for(int i=0;i<n+2;i++){
            for(int j=0;j<m+2;j++){
                a[i][j] = '0';
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                cin>>input;
                if(input=='*'){
                    a[i][j] = '*';

                    if(a[i-1][j-1]!='*')
                        a[i-1][j-1] = char(int(a[i-1][j-1])+1);
                    if(a[i-1][j]!='*') 
                        a[i-1][j] = char(int(a[i-1][j])+1);
                    if(a[i-1][j+1]!='*') 
                        a[i-1][j+1] = char(int(a[i-1][j+1])+1);
                    if(a[i][j-1]!='*') 
                        a[i][j-1] = char(int(a[i][j-1])+1);
                    if(a[i][j+1]!='*') 
                        a[i][j+1] = char(int(a[i][j+1])+1);
                    if(a[i+1][j-1]!='*') 
                        a[i+1][j-1] = char(int(a[i+1][j-1])+1);
                    if(a[i+1][j]!='*') 
                        a[i+1][j] = char(int(a[i+1][j])+1);
                    if(a[i+1][j+1]!='*') 
                        a[i+1][j+1] = char(int(a[i+1][j+1])+1);
                }
            }
        }

        cout<<"Field #"<<count<<":"<<endl;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }

    
}