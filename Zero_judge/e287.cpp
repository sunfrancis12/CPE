#include<iostream>
using namespace std;

int n, m, sum = 0;
int map[100][100], visited[100][100];

bool inrange(int i, int j){
    if(i>=0 && i<n && j>=0 && j<m) return true;
    else return false;
}

int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y){
    int min = 1e6, min_x = -1, min_y = -1;
    visited[x][y] = 0;
    sum += map[x][y];

    for(int i=0;i<4;i++){
        int next_x = x + d[i][0];
        int next_y = y + d[i][1];

        //printf("try: (%d, %d)\n", next_x, next_y);
        if(inrange(next_x, next_y) && visited[next_x][next_y] && map[next_x][next_y]<min){
            min = map[next_x][next_y]; min_x = next_x; min_y = next_y;
        }
    }
    
    //printf("visited: (%d, %d), next: (%d, %d)\n", x, y, min_x, min_y);
    if(min == 1e6) return;
    dfs(min_x, min_y);
}

int main(){
    int min = 1e6, min_x, min_y;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>map[i][j];
            visited[i][j] = 1;

            if(map[i][j]<min){
                min = map[i][j]; min_x = i; min_y = j;
            }
        }
    }

    //cout<<endl;
    dfs(min_x, min_y);
    cout<<sum;

}