#include <iostream>
using namespace std;

int main() {
	
	int num1,den1,num2,den2; 
	cout << "请分别输入两个分数的分子与分母："; 
    cin >> num1 >> den1 >> num2 >> den2;

    int lcm = 1;  // 初始化最小公倍数
    int i = 1;    // 初始化循环变量

    // 使用 while 循环找到最小公倍数
    while (true) {
        if (lcm % den1 == 0 && lcm % den2 == 0) {
            break;  // 找到最小公倍数，退出循环
        }
        lcm++;  // 尝试下一个数作为最小公倍数
    }

    // 计算通分后的分子值
    int newNum1 = (num1 * lcm) / den1;
    int newNum2 = (num2 * lcm) / den2;

    cout << "通分后的分母值为: " << lcm << endl;
    cout << "分数1通分后的分子值: " << newNum1 << endl;
    cout << "分数2通分后的分子值: " << newNum2 << endl;

    return 0;
}

