#include <iostream>
using namespace std;
int main() {
    int sum = 0;       // 存储输入的数字之和
    int number;        // 存储用户输入的数字
    while (true) {
        cout << "请输入一个整数：";
        cin >> number;
        sum += number;  // 累加输入的数字

        if (sum > 1000) {
            break;  // 当总和达到或超过1000时退出循环
        }
    }
	cout << "数字之和为：" << sum << endl;
    return 0;
}

