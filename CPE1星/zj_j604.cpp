#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,k;
    while(cin>>n){
        if(n==0) break;
        cin>>k;
        int win[n+1],loss[n+1];
        for(int i=1;i<=n;i++){
            win[i] = 0;
            loss[i] = 0;
        }
        
        for(int i=0;i<k*n*(n-1)/2;i++){
            int p1,p2;
            string m1,m2;
            cin>>p1>>m1>>p2>>m2;

            if(m1=="rock"){
                if(m2=="paper"){
                    win[p2]++;
                    loss[p1]++;
                }
                if(m2=="scissors"){
                    win[p1]++;
                    loss[p2]++;
                }
            }

            if(m1=="paper"){
                if(m2=="scissors"){
                    win[p2]++;
                    loss[p1]++;
                }
                if(m2=="rock"){
                    win[p1]++;
                    loss[p2]++;
                }
            }

            if(m1=="scissors"){
                if(m2=="rock"){
                    win[p2]++;
                    loss[p1]++;
                }
                if(m2=="paper"){
                    win[p1]++;
                    loss[p2]++;
                }
            }
        }

        double sum;
        for(int i=1;i<=n;i++){
            if(loss[i]+win[i]==0){
                cout<<"-\n";
                continue;
            }
            sum = double(win[i])/double(win[i]+loss[i]);

            cout<<fixed<<setprecision(3)<<sum<<endl;
        }

    }
}