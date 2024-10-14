#include <iostream>
using namespace std;

int main() {
    int left = 1, right = 100; // 初始查找范围 [1, 100]
    int target; // 目标值
    cout << "請輸入一個範圍在1-100之間的目標值: ";
    cin >> target;

    while (left <= right) {
        int mid = left + (right - left) / 2; // 計算中間位置，防止溢出
        cout << "目前查找範圍: [" << left << ", " << right << "], 中間值: " << mid << endl;

        // if (mid == target) {
        //     cout << "找到目標值 " << target << "!" << endl;
        //     return 0;
        // } else 
        
        if (mid < target) {
            left = mid + 1; // 縮小到右半部分
        } else {
            right = mid - 1; // 縮小到左半部分
        }

    }

    cout << "未找到目標值。" << endl;
    return 0;
}