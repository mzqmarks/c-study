#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "请输入两个正整数: ";
    cin >> num1 >> num2;
    // 使用辗转相除法计算最大公约数
    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    // 判断是否互质
    if (num1 == 1) {
        cout << "这两个整数是互质的。" << endl;
    } else {
        cout << "这两个整数不是互质的。" << endl;
    }
    cout << "最大公约数的值：" << num1; 
    return 0;
}

