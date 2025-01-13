#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "请输入一个字母: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << ch << " 是大写字母";
    } else if (islower(ch)) {
        cout << ch << " 是小写字母";
    } else {
        cout << ch << " 不是字母";
    }

    return 0;
}


