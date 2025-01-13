#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "请输入一个正整数：";
    cin >> num;

    cout << num << "的因数有：";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << ",";
        }
    }
    return 0;
}

