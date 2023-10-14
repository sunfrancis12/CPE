#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,count=0;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    while(cin>>n>>m){
        if(n==0 || m==0) break;

        char a[100][100],input;
        count++;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j] = '0';
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
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
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }

    }

    
}