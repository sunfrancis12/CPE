#include<bits/stdc++.h>
using namespace std;

int x,y;
char face; //面向方向
int field[51][51];
int danger[51][51]={0}; //機器人掉落區做標
int fail=0; //機器掉落

void move(){

    int x_pos=x,y_pos=y;

    if(face=='N') x_pos--;
    if(face=='S') x_pos++;
    if(face=='W') y_pos--;
    if(face=='E') y_pos++;

    if(danger[x][y] == 1 && field[x_pos][y_pos] == -1){
        return;
    }

    if(field[x_pos][y_pos]==-1){
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

    cin>>x>>y;

    for(int i=0;i<=x+1;i++){
        for(int j=0;j<=y+1;j++){

            //設定邊界
            if(i==0 || i==x+1){
                field[i][j]=-1;
                continue;
            }

            if(j==0 || j==y+1){
                field[i][j]=-1;
                continue;
            }

            field[i][j]=0;
        }
    }

    
    while(cin>>x>>y>>face){
        int angle; //方位角度
        x+=1;
        y+=1;

        cin>>cmd;

        for(int i=0;i<cmd.length();i++){
            if(fail==1) break;
            robot(cmd[i]);
        }

        cout<<x-1<<" "<<y-1<<" "<<face;
        if(fail==1) cout<<" LOST";
        cout<<endl;
        fail = 0;
    }
    

    /*
    for(int i=0;i<=x+1;i++){
        for(int j=0;j<=y+1;j++){
            cout<<field[i][j]<<" ";
        }
        cout<<endl;
    }
    */


}