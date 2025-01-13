#include <iostream>
using namespace std;

int main() {
    char inputChar;
    
    cout << "请输入一个字符: ";
    cin >> inputChar;

    // 判断字符是否为大写字母
    if (inputChar >= 'A' && inputChar <= 'Z') {
        // 如果是大写字母，将其转换为小写字母
        inputChar = inputChar + 32; // 可以使用加32的方式实现大小写转换
    }
    
    cout << inputChar << endl;
    
    return 0;
}

