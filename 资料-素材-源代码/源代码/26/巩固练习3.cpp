#include <iostream>
#include <cctype> // 用于字符操作函数
using namespace std;

int main() {
    char inputChar;
    
    cout << "请输入一个字符: ";
    cin >> inputChar;
    
    char resultChar = isupper(inputChar) ? tolower(inputChar) : inputChar;
    
    cout << resultChar << std::endl;
    
    return 0;
}

