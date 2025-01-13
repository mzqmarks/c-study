#include <iostream>
using namespace std;

int main() {
    int num = 1;  // 初始奇数为1
    int sum = 0;

    while (num <= 50) {
        cout << num << " ";
        sum += num;
        num += 2;  // 增加2以获取下一个奇数
    }

    cout << "\n奇数的和为：" << sum << endl;

    return 0;
}

