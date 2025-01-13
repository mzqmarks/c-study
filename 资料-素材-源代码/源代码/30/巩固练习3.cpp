#include <iostream>
#include <cctype> // 用于判断字符类型和转换大小写

using namespace std;

int main() {
    while (true) {
        char inputChar;
        
        cout << "请输入一个字母（输入0退出）: ";
        cin >> inputChar;

        if (inputChar == '0') {
            cout << "字母转换结束！" << endl;
            break; // 输入0时退出循环
        } else if (isupper(inputChar)) {
            char lowercaseChar = tolower(inputChar);
            cout << "我改成了小写 " << lowercaseChar << endl;
        } else if (islower(inputChar)) {
            char uppercaseChar = toupper(inputChar);
            cout << "我改成了大写 " << uppercaseChar << endl;
        } else {
            cout << "输入有误！" << endl;
        }
    }

    return 0;
}

