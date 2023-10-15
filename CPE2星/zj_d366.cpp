#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long n1,n2,num;
        int divisors=2;
        cin>>n1>>n2;

        for(long i=n1;i<=n2;i++){
            int j=2,sum=1;
            long temp=i;

            vector<int> vec = {0};

            while((temp/j)>0){
                int count=0;
                while(temp%j==0){
                    temp /= j;
                    count++;
                }
                //cout<<temp<<" "<<endl;
                vec.push_back(count);
                j++;
            }

            for(int k=0;k<vec.size();k++){
                sum *= (vec[k]+1);
            }       

            if(sum>divisors){
                divisors = sum;
                num = i;
                cout<<divisors<<" "<<num;
            }
        }

        cout<<"Between "<<n1<<" and "<<n2<<", "<<num<<" has a maximum of "<<divisors<<" divisors.\n";
    }
}