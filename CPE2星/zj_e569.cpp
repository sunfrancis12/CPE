#include<bits/stdc++.h>
using namespace std;

int k,q,n;

vector<int> king;
vector<int> queen;

bool check_king(int point){
    for(int i=0;i<king.size();i++){
        if(point == king[i]) return false;
    }

    return true;
}

bool check_queen(int point){
    for(int i=0;i<queen.size();i++){
        if(point == queen[i]) return false;
    }

    return true;
}


void king_move(int center){
    king.push_back(center);
    if(center-1>=0 && (center-1)%8!=7) king.push_back(center-1);
    if(center+1>=0 && (center+1)%8!=0) king.push_back(center+1);
    if(center-8>=0) king.push_back(center-8);
    if(center+8<=63) king.push_back(center+8);
}

void queen_move(int center){

    for(int i = 1;i <= (7-center%8);i++){
        if(k == center+i) break; 
        queen.push_back(center+i);
    }

    for(int i = (center%8);i>0;i--){
        if(k == center-i) break;
        queen.push_back(center-i);
    }

    for(int i= center+8;i<=63;i+=8){
        if(k == i) break;
        queen.push_back(i);
    }

    for(int i= center-8;i>=0;i-=8){
        if(k == i) break;
        queen.push_back(i);
    }

    
}

string output(int king_p, int queen_p){

    queen.clear();
    queen_move(queen_p);

    for(int i=0;i<queen.size();i++){
        cout<<queen[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<queen.size();i++){
        if(!check_king(queen[i])) return "Stop\n"; 
    }

    return "Continue\n";
}

int main(){

    while(cin>>k>>q>>n){
        if(k==q){
            cout<<"Illegal state"<<endl;
            continue;
        }

        king_move(k);
        queen_move(q);

        for(int i=0;i<king.size();i++){
            cout<<king[i]<<" ";
        }

        cout<<endl;

        if(!(check_king(n)) && !(check_queen(n))){
            cout<<"Move not allowed\n";
            continue;
        }

        if(check_queen(n) ||n==q){
           cout<<"Illegal move"<<endl;
           king.clear();
           queen.clear();
           continue; 
        }

        cout<<output(k,n);

        king.clear();
        queen.clear();
    }
}