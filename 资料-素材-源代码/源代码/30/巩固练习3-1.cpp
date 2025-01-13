#include <iostream>

using namespace std;

int main() {
    while (true) {
        char inputChar;
        
        cout << "请输入一个字母（输入0退出）: ";
        cin >> inputChar;

        if (inputChar == '0') {
            cout << "字母转换结束！" << endl;
            break; // 输入0时退出循环
        } else if (inputChar >= 'A' && inputChar <= 'Z') {
            char lowercaseChar = inputChar + ('a' - 'A');
            cout << "我改成了小写 " << lowercaseChar << endl;
        } else if (inputChar >= 'a' && inputChar <= 'z') {
            char uppercaseChar = inputChar - ('a' - 'A');
            cout << "我改成了大写 " << uppercaseChar << endl;
        } else {
            cout << "输入有误！" << endl;
        }
    }

    return 0;
}

