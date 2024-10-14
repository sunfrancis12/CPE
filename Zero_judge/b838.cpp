#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    int num = 0;
    cin>>num;

    for(int i=0;i<num;i++){
        string input;
        cin>>input;
        stack<int> stk;
        int counter = 0;
        bool wrong = false;

        for(int j=0;j<input.length();j++){
            if(input[j]=='(') stk.push(1);
            if(input[j]==')'){
                if(stk.empty()){wrong=true; break;}
                stk.pop();
                counter++;
            }
        }

        if(!stk.empty() || wrong){cout<<"0\n"; continue;}
        cout<<counter<<endl;
    }
}