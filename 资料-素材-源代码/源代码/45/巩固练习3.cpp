#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    int sum = 0;
    cout << "请输入两个正整数: ";
    cin >> num1 >> num2;
    // 确保num1小于等于num2，如果不是，则交换它们
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (int i = num1; i <= num2; i++) {
        if (i % 3 == 0) {
            // 如果i是3的倍数，累加到和中
            sum += i;
        }
    }
    cout << "在 " << num1 << " 和 " << num2 << " 之间的3的倍数之和是: " << sum << endl;
    return 0;
}

