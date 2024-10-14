#include <iostream>
#include <vector>

int main() {
    int n;  // 数字的个数
    std::cin >> n;

    std::vector<int> vec(n);  // 创建大小为 n 的 vector

    // 读取 n 个数字并存入 vector 中
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    // 输出 vector 中的数字以验证
    for (int i = 0; i < n; ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}