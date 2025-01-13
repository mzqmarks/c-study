#include <iostream>
#include <bitset>
#include <iomanip> // 用于 oct 和 hex 控制符
using namespace std;

int main() {
    int num;
    cout << "请输入一个十进制整数：";
    cin >> num;

    cout << "二进制表示：" << bitset<sizeof(int) * 4>(num) << endl;
    cout << "八进制表示：" << oct << num << endl;
    cout << "十六进制表示：" << hex << num << endl;

    return 0;
}
