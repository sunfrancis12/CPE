#include<iostream>
#include<vector>
#include<string>
using namespace std;

int n, m, field[50][50];

bool inrange(int i, int j){
    if(i>=0 && i<n && j>=0 && j<m) return true;
    else return false;
}

int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int dfs(int range, int origin_x, int origin_y, int x, int y, vector<vector<int>> &visited){
    int sum = 0;
    visited[x][y] = 0;

    for(int i=0;i<4;i++){
        int next_x = x + d[i][0];
        int next_y = y + d[i][1];

        //printf("try: (%d, %d)\n", next_x, next_y);
        //printf("origin : (%d, %d), try (%d, %d)\n", origin_x, origin_y, next_x, next_y);
        if(inrange(next_x, next_y) && visited[next_x][next_y] && (abs(next_x - origin_x) + abs(next_y - origin_y) <= range) ){
            //printf("origin : (%d, %d), from (%d, %d) => (%d, %d)\n", origin_x, origin_y, x, y, next_x, next_y);
            sum += dfs(range , origin_x, origin_y, next_x ,next_y, visited);
        }
    }

    return sum + field[x][y];
}

int main(){
    vector<string> coord;
    int sum = 0;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>field[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vector<vector<int>> visited(n, vector<int>(m, 1));
            int temp = dfs(field[i][j], i, j, i, j, visited);
            //printf("sum(%d, %d) = %d\n",i ,j ,temp);
            if(field[i][j] == temp%10){
            //if(field[i][j] == dfs(field[i][j], i, j, i, j, visited)%10){
                coord.push_back(to_string(i) + " " + to_string(j));
                sum++;
            }
            
        }
    }

    cout<<sum<<endl;

    for(auto i : coord){
        cout<<i<<endl;
    }

}