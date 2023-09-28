#include<bits/stdc++.h>
using namespace std;

int x,y;
int area_x,area_y;
char face; //面向方向
int danger[50][50]={0}; //機器人掉落區做標
int fail=0; //機器掉落

void move(){

    int x_pos = x,y_pos = y;

    if(face=='N') y_pos++;
    if(face=='S') y_pos--;
    if(face=='W') x_pos--;
    if(face=='E') x_pos++;

    if(danger[x][y] == 1 && (x_pos > area_x || y_pos > area_y || x_pos < 0 || y_pos < 0)){
        return;
    }

    if(x_pos > area_x || y_pos > area_y || x_pos < 0 || y_pos < 0){
        fail = 1;
        danger[x][y] = 1;
        return;
    }else{
        x = x_pos;
        y = y_pos;
    }
}

char turn(char cmd){
    if(cmd =='R'){
        if(face=='N') return 'E';
        if(face=='S') return 'W';
        if(face=='W') return 'N';
        if(face=='E') return 'S';
    }else{
        if(face=='N') return 'W';
        if(face=='S') return 'E';
        if(face=='W') return 'S';
        if(face=='E') return 'N';
    }

    return 0;
}

void robot(char cmd){
    if(cmd == 'F'){
        move();
    }else{
        face = turn(cmd);
    }
}

int main(){
    string cmd; //執行指令

    cin>>area_x>>area_y;

    while(cin>>x>>y>>face){

        cin>>cmd;

        for(int i=0;i<cmd.length();i++){
            if(fail == 1) break;
            robot(cmd[i]);
        }

        cout<<x<<" "<<y<<" "<<face;
        if(fail==1) cout<<" LOST";
        cout<<endl;
        fail = 0;
    }


}