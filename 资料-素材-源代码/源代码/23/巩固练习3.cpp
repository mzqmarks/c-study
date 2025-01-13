#include <iostream>
using namespace std;
int main() {
	
    double num1, num2, num3,num4,temp;

    cout << "请输入四个数字: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num3 > num4) {
        temp = num3;
        num3 = num4;
        num4 = temp;
    }

    cout << "输出最大值：" << num4;

    return 0;
}

