#include <iostream>
using namespace std; 
int main() {
    int num1, num2;
    int sum = 0;

    cout << "请输入两个正整数: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum++;
        }
    }

    cout << sum;

    return 0;
}

