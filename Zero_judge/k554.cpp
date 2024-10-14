#include<iostream>
using namespace std;
int main(){
    int row,col = 0;
    cin>>row>>col;

    int input_feild[row][col];
    int result_feild[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>input_feild[i][j];
            result_feild[i][j] = 0;
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(input_feild[i][j]==1){
                result_feild[i][j] += 1;
                if(i-1>=0) result_feild[i-1][j] += 1;
                if(row>i+1) result_feild[i+1][j] += 1;
                if(j-1>=0) result_feild[i][j-1] += 1;
                if(col>j+1) result_feild[i][j+1] += 1;
            }

            if(input_feild[i][j]==2){
                result_feild[i][j] += 1;

                for(int k=0;k<row;k++){
                    if(k==i) continue;
                    result_feild[k][j] += 1;
                }

                for(int k=0;k<col;k++){
                    if(k==j) continue;
                    result_feild[i][k] += 1;
                }
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(col==j-1){cout<<result_feild[i][j]; continue;}
            cout<<result_feild[i][j]<<" ";
        }
        if(row==i-1) continue;
        cout<<endl;
    }
}