#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    string command;
    vector<string> people; 

    cin>>n;
    n++;
    while(n--){
        getline(cin,command);

        //換人睡
        if(command[0]=='S'){
            string temp="";
            for(int i=6;i<command.length();i++){
                temp += command[i];
            }
            people.push_back(temp);
        }else if(command[0]=='T'){ //在睡誰
            if(people.size()==0) cout<<"Not in a dream"<<endl;
            else cout<<people.back()<<endl;
        }else if(command[0]=='K'){ //回上一個
            if(people.size()==0){
                continue;
            }else{
                people.pop_back();
            }
        }
    }
}