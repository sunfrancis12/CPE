#include<iostream>
#include<queue>
#include<cstdint>
using namespace std;

int m;

struct man
{
    long long s,t;
    int lost = 0;
    int id;
    man(long long a, long long b, int c){
        s = a;
        t = b;
        id = c;
    }
};

int start(queue<man> &comp){
    queue<man> win, lose;

    if(comp.size()==1) return comp.front().id;

    queue<man> comp_tset = comp;

    cout<<"comp id:"<<endl;
    while(!comp_tset.empty()){
        cout<<comp_tset.front().id<<" ";
        comp_tset.pop();
    }
    cout<<endl;

    while(!comp.empty()){
        man p1 = comp.front(); comp.pop();

        if(comp.empty()){
            win.push(p1);
            break;
        }

        man p2 = comp.front(); comp.pop();
        //printf("%d vs %d\n",p1.id, p2.id);
        long long a = p1.s, b = p1.t, c = p2.s, d = p2.t;

        if(a * b >= c * d){
            p2.lost++;

            if(p2.lost < m){
                p2.s += c/2;
                p2.t += d/2;
                lose.push(p2);
            }

            p1.s += (c*d)/(2*b);
            p1.t += (c*d)/(2*a);
            win.push(p1);
        } else {
            p1.lost++;

            if(p1.lost < m){
                p1.s += a/2;
                p1.t += b/2;
                lose.push(p1);
            }

            p2.s += (a*b)/(2*d);
            p2.t += (a*b)/(2*c);
            win.push(p2);
        }
    }

        while(!lose.empty()){
            win.push(lose.front());
            lose.pop();
        }

        // queue<man> win_test = win, lose_test = lose;

        // cout<<"win id:"<<endl;
        // while(!win_test.empty()){
        //     cout<<win_test.front().id<<" ";
        //     win_test.pop();
        // }
        // cout<<endl;

        // cout<<endl<<"lose id:"<<endl;
        // while(!lose_test.empty()){
        //     cout<<lose_test.front().id<<" ";
        //     lose_test.pop();
        // }
        // cout<<endl;

        return start(win);
}


int main(){
    int n;
    cin>>n>>m;
    int s[n], t[n], id[n];
    queue<man> comp;

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    for(int i=0;i<n;i++){
        cin>>id[i];
    }

    for(int i=0;i<n;i++){
        
        comp.push(man(s[i], t[i], id[i]));
    }

    cout<<start(comp);

}