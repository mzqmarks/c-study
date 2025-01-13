#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double fNumber,num;
	int digit;
    cout << "请输入一个10位小数的正浮点数: ";   
    cin >> fNumber;
    cout << "取第几（1~10）位中的一个小数：";
    cin >> num;
    int decimalCount = 0; // 初始化小数位数为0
    // 不断乘以10
    while (decimalCount <= num) {
        digit = static_cast<int>(fNumber);
        fNumber = fNumber - digit; // 取小数部分（去掉整数部分）
        fNumber *= 10; 
        decimalCount++;
    }
    
    cout << "浮点数中的第 " << num << " 位小数为: " << digit << endl;

    return 0;
}

