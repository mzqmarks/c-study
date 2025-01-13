#include <iostream>
using namespace std;
int main() {
	
    double num1, num2, num3,temp;

    cout << "请输入三个数字: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num3 < num2) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num2 < num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "最后的顺序: " << num1 << "--" << num2 << "--" << num3;

    return 0;
}


