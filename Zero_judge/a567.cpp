#include<bits/stdc++.h>
using namespace std;

struct homework{
    int deadline;
    int profit;
    homework(int d, int p){
        deadline = d;
        profit = p;
    }
};

bool cmp(homework x, homework y){
    return x.deadline > y.deadline;
}

int main(){
    int num;

    while(cin>>num){
        vector<homework> vec;
        priority_queue<int, vector<int>, greater<int>> total_profit;
        int day = 0,sum = 0;

        for(int i=0;i<num;i++){
            int d,p;
            cin>>d>>p;
            if(d > day) day = d;
            vec.push_back(homework(d,p));
        }

        sort(vec.begin(),vec.end(),cmp);

        while(!vec.empty()){
            homework temp = vec.back();
            vec.pop_back();
            if(temp.deadline > total_profit.size()){
                total_profit.push(temp.profit);
            }
            else if(temp.deadline == total_profit.size() && temp.profit > total_profit.top()){
                total_profit.pop();
                total_profit.push(temp.profit);
            }
        }

        while(!total_profit.empty()){
            sum += total_profit.top();
            total_profit.pop();
        }

        cout<<sum<<endl;
    }
}