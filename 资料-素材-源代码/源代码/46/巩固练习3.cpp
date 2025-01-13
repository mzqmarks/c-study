#include <iostream>
using namespace std;

int main() {
    for (int num = 100; num <= 999; num++) {
        int digit1 = num / 100;      // 百位数
        int digit2 = (num / 10) % 10; // 十位数
        int digit3 = num % 10;       // 个位数

        int sum = digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3;

        if (sum == num) {
            cout << num << " ";
        }
    }
    return 0;
}

