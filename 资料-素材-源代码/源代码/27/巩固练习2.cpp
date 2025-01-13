#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "请输入成绩（A、B、C、D、F）：" << endl;
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "优秀" << endl;
            break;
        case 'B':
            cout << "良好" << endl;
            break;
        case 'C':
            cout << "中等" << endl;
            break;
        case 'D':
            cout << "及格" << endl;
            break;
        case 'F':
            cout << "不及格" << endl;
            break;
        default:
            cout << "无效的输入！" << endl;
    }

    return 0;
}

