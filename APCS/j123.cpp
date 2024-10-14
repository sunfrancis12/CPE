#include<bits/stdc++.h>
using namespace std;

int r, c, n;
int storage[30][50], length[30];

bool inrange(int x,int y){
    if(x>=0 && x<r && y>=0 && y<c) return true;
    else return false;
}

bool shape(char ch, int dis){

    if(ch == 'A'){
        int right = max({length[dis]+1, length[dis+1]+1, length[dis+2]+1, length[dis+3]+1});
        if(right<=c && dis+3 < r){
            for(int i=dis;i<dis+4;i++){
                storage[i][right-1] = 0;
                length[i] = right;
            }
        } else {
            return false;
        }
    }
    else if(ch == 'B'){
       int right = length[dis] + 3;
       if(right<=c){

            for(int i = length[dis];i<length[dis]+3;i++){
                storage[dis][i] = 0;
            }

            length[dis] = right;
       } else {
        return false;
       }
    }

    else if(ch == 'C'){
        int right = max({length[dis]+2, length[dis+1]+2});
        if(right<=c && dis+1 < r){
            for(int i=dis;i<dis+2;i++){
                for(int j=right-1;j>=right-2;j--){
                    storage[i][j] = 0;
                }
                length[i] = right;
            }
        } else {
            return false;
        }

    }
    else if(ch == 'D'){
        int right = max({length[dis]+1, length[dis+1]+3});
        if(right<=c && dis+1 < r){
            storage[dis][right-1] = 0;
            length[dis] = right;
            
            for(int i = right-1;i>=right-3;i--){
                storage[dis+1][i] = 0;
            }

            length[dis+1] = right;
        } else {
            return false;
        }
    }
    else if(ch == 'E'){
        int right = max({length[dis]+1, length[dis+1]+2,length[dis+2]+2});
        if(right<=c && dis+2 < r){
            storage[dis][right-1] = 0;
            length[dis] = right;
            
            for(int i = right-1;i>=right-2;i--){
                storage[dis+1][i] = 0;
            }

            length[dis+1] = right;

            for(int i = right-1;i>=right-2;i--){
                storage[dis+2][i] = 0;
            }

            length[dis+2] = right;
        } else {
            return false;
        }        
    }

    return true;
}

int main(){
    int discard = 0, space = 0;
    cin>>r>>c>>n;

    for(int i=0;i<r;i++){
        length[i] = 0;
        for(int j=0;j<c;j++){
            storage[i][j] = 1;
        }
    }

    while(n--){
        int dis;
        char ch;
        cin>>ch>>dis;

        if(!shape(ch, dis)) discard++;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            //cout<<storage[i][j]<<" ";
            if(storage[i][j]) space++;
        }
        //cout<<endl;
    }

    cout<<space<<" "<<discard;
}