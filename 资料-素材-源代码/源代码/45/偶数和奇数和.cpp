#include <iostream>
using namespace std; 
int main() {
    int num1, num2;
    int evenSum = 0; // 用于存储偶数和
    int oddSum = 0;  // 用于存储奇数和

    cout << "请输入两个正整数: ";
    cin >> num1 >> num2;

    // 确保num1小于等于num2，如果不是，则交换它们
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            // 如果是偶数，加入偶数和
            evenSum += i;
        } else {
            // 如果是奇数，加入奇数和
            oddSum += i;
        }
    }

    cout << "在" << num1 << "和" << num2 << "之间的偶数和为: " << evenSum << endl;
    cout << "在" << num1 << "和" << num2 << "之间的奇数和为: " << oddSum << endl;
	cout << "密码是：" << evenSum << oddSum; 
    return 0;
}

