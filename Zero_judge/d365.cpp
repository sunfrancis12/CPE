#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int h, w;

bool inrange(int i, int j){
    if(i>=0 && i<h && j>=0 && j<w) return true;
    else return false;
}

int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(vector<vector<char>> &world, int x,int y, char word){
    world[x][y] = '#';

    for(int i=0;i<4;i++){
        int next_x = x + d[i][0];
        int next_y = y + d[i][1];

        //printf("try: (%d, %d)\n", next_x, next_y);
        if(inrange(next_x, next_y) && world[next_x][next_y] != '#' && world[next_x][next_y] == word){
            dfs(world, next_x, next_y, word);
        }
    }
    return;
}

bool cmp(pair<char, int> &a, pair<char, int> &b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    int n;
    cin>>n;
    
    for(int k=1;k<=n;k++){
        cout<<"World #"<<k<<endl;
        cin>>h>>w;
        vector<vector<char>> world;
        map<char, int> word_list;
        char temp;

        for(int i=0;i<h;i++){
            vector<char> row;
            for(int j=0;j<w;j++){
                cin>>temp;
                row.push_back(temp);
                word_list[temp] = 0;
            }
            world.push_back(row);
        }

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(world[i][j]=='#'){
                    continue;
                } else {
                    word_list[world[i][j]]++;
                    dfs(world, i, j,world[i][j]);
                }
            }
        }

        vector<pair<char, int>> result(word_list.begin(), word_list.end());
        sort(result.begin(), result.end(), cmp);

        for(auto i : result){
            cout<<i.first<<": "<<i.second<<endl;
        }

    }

}