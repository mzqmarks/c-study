#include <iostream>
using namespace std;
int main() {
	
    double number,absoluteValue;
    cout << "请输入一个数字：";
    cin >> number;

    // 使用条件语句计算绝对值
    if (number >= 0) {
        absoluteValue = number;
    } else {
        absoluteValue = -number;
    }
    cout << number << "的绝对值是：" << absoluteValue;

    return 0;
}

