#include <iostream>
using namespace std;

int main() {
    string inputPassword,password = "123456";
    //3次密码输入机会 
    int attemptsRemaining = 3;
    
    while (attemptsRemaining > 0) {
        cout << "请输入密码: ";
        cin >> inputPassword;
        if (inputPassword == password) {
            cout << "登录成功！欢迎进入系统。" << endl;
            // 在这里可以添加其他功能
            break;
        } else {
            attemptsRemaining--;
            cout << "密码错误，还剩 " << attemptsRemaining << " 次尝试机会。" << endl;

            if (attemptsRemaining == 0) {
                cout << "密码输入错误次数已达上限，账户已被锁定。" << endl;
            }
        }
    }
    return 0;
}

