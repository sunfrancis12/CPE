#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
 
bool cmp(int x, int y){
    if ((x % M) != (y % M)){
        return (x % M) < (y % M);
    } else {
        if ((x % 2) * (y % 2)){
            //若兩奇數除以M餘數大小相等，則原本數值較大的奇數排在前面
            return x > y;
        } else if ((x % 2 == 0) && (y % 2 == 0)){
            //若兩偶數除以M餘數大小相等，則較小的偶數排在前面
            return x < y;
        } else {
            //兩數為一奇一偶且兩數除以M 的餘數相等，則奇數要排在偶數前面
            cout<<(x % 2)<<" "<<bool((x % 2))<<endl;
            return (x % 2);
        }
    }
}
         
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> N >> M){
        if (N == 0 && M == 0){
            cout << "0 0\n";
            break;
        }
        cout << N << " " << M << "\n";
        int a[N];
        for (int i = 0; i < N; i++){
            cin >> a[i];
        }
        sort(a, a+N, cmp);
        for (int i = 0; i < N; i++){
            cout << a[i] << '\n';
        }
    }
}