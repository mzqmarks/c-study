#include <iostream>
#include <string>
using namespace std; 

int main() {
    string username = "fengfei";
    string password = "19910311";
    string inputUsername, inputPassword;

    cout << "请输入用户名：";
    cin >> inputUsername;

    if (inputUsername == username) {
        cout << "请输入密码：";
        cin >> inputPassword;

        if (inputPassword == password) {
            cout << "神奇大门已打开！" << username << "欢迎来到魔法森林。";
        } else {
            cout << "密码错误，请重试。";
        }
    } else {
        cout << "用户名不存在，请重试。";
    }

    return 0;
}
