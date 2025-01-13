#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cin >> input;

    int length = input.length();
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "是回文" << endl;
    } else {
        cout << "不是回文" << endl;
    }

    return 0;
}

