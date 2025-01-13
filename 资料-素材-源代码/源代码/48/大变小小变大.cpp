#include <iostream>
#include <cctype> // 用于字符大小写转换函数
using namespace std;
int main() {
    string inputString = "";
    cout << "请输入10个字符: ";

    for (int i = 0; i < 10; i++) {
        char character;
        cin >> character;
        if (islower(character)) {
            // 如果是小写字符，转换为大写并输出
            character = toupper(character);
        } else if (isupper(character)) {
            // 如果是大写字符，转换为小写并输出
            character = tolower(character);
        } 
        inputString += character;
    }
    cout << inputString;
    return 0;
}

