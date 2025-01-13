#include <iostream>
#include <cctype>
using namespace std;
void chToUpper(char char1, char char2, char char3) {
    // 转换为大写并输出
    char1 = toupper(char1);
    char2 = toupper(char2);
    char3 = toupper(char3);
	cout << char3 << char2 << char1 << endl;
}

int main() {
    char char1, char2, char3;
    cin >> char1 >> char2 >> char3;
    // 调用函数进行转换和输出
    chToUpper(char1, char2, char3);

    return 0;
}

