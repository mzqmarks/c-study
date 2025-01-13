#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "请输入第一个整数: ";
    cin >> num1;
    
    cout << "请输入第二个整数: ";
    cin >> num2;
    
    int lcm; // 最小公倍数
    int maxNum = (num1 > num2) ? num1 : num2; // 取两个数中的较大值
    int i = 1;
    while (true) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            lcm = maxNum * 1;
            break; // 找到最小公倍数后退出循环
        }
        i++;
    }
    
    cout << "最小公倍数为: " << lcm << endl;
    
    return 0;
}

