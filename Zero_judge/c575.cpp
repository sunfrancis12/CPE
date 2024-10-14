#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,k;
vector<int> client;

bool check(int length){ //輸入基地台訊號直徑
    int internet_now = -1; //目前網路範圍內最右邊的服務點
    int station_count = 0; //基地台的數量

    while(true){
        int client_next = upper_bound(client.begin(), client.end(), internet_now) - client.begin(); //找出位於目前範圍外右邊的第一個服務點
        internet_now = client[client_next] + length; //服務範圍為新的服務點 + 基地台訊號直徑
        station_count++;

        if(station_count>k) return false;
        else if(internet_now >= client.back()) return true;
    }
}

int main(){
    cin>>n>>k;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp, client.push_back(temp);
    }

    sort(client.begin(), client.end());

    int left = 1; int right = 1e9, ans;

    while(left<=right){
        int mid = (left + right)/2;
        //cout << "目前查找範圍: [" << left << ", " << right << "], 中間值: " << mid << endl;

        if(check(mid)){
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout<<ans;
}