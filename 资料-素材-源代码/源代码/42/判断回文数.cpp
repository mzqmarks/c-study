#include <iostream>
using namespace std;
int main() {
    int num, reversedNum = 0, originalNum, remainder;
    cout << "请输入一个整数: ";
    cin >> num;
    originalNum = num; // 保存原始输入的值
    
    do {
        remainder = num % 10;      // 获取最后一位数字
        reversedNum = reversedNum * 10 + remainder; // 倒转数字
        num /= 10;                // 移除最后一位数字
    } while (num != 0);

    if (originalNum == reversedNum) {
        cout << originalNum << " 是回文数" << endl;
    } else {
        cout << originalNum << " 不是回文数" << endl;
    }

    return 0;
}

