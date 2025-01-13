#include <iostream>
using namespace std;
int main() {
    int num1, num2,temp;
    cout << "请输入两个整数: ";
    cin >> num1 >> num2;
    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    cout << "最大公约数是: " << num1 << endl;
    return 0;
}

