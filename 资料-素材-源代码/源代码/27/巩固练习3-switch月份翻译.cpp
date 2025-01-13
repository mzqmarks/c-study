#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "请输入一个数字（1~12）：" << endl;
    cin >> month;

    switch (month) {
        case 1:
            cout << "一月 (January)" << endl;
            break;
        case 2:
            cout << "二月 (February)" << endl;
            break;
        case 3:
            cout << "三月 (March)" << endl;
            break;
        case 4:
            cout << "四月 (April)" << endl;
            break;
        case 5:
            cout << "五月 (May)" << endl;
            break;
        case 6:
            cout << "六月 (June)" << endl;
            break;
        case 7:
            cout << "七月 (July)" << endl;
            break;
        case 8:
            cout << "八月 (August)" << endl;
            break;
        case 9:
            cout << "九月 (September)" << endl;
            break;
        case 10:
            cout << "十月 (October)" << endl;
            break;
        case 11:
            cout << "十一月 (November)" << endl;
            break;
        case 12:
            cout << "十二月 (December)" << endl;
            break;
        default:
            cout << "错误消息！" << endl;
    }

    return 0;
}

