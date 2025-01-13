#include <iostream>
using namespace std; 

int main() {
    int number;

    cout << "请输入一个整数：";
    cin >> number;

    if (number > 0) {
        cout << "这是一个正数。" << endl;

        if (number % 2 == 0) {
            cout << "这是一个偶数。"; 
        } else {
            cout << "这是一个奇数。";
        }
    } 
	else if (number < 0) {
        cout << "这是一个负数。";
    } 
	else {
        cout << "这是零。";
    }

    return 0;
}

