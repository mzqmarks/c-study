#include <iostream>
using namespace std;

int main() {
    cout << "请输入星期，用数字表示：" << endl;
    int day;
    string translatedDay;
    cin >> day;

    // 使用 switch 语句进行翻译
    // 根据输入值进行匹配 
    switch (day) {
        case 1:
            translatedDay = "星期一 (Monday)";
            break;
        case 2:
            translatedDay = "星期二 (Tuesday)";
            break;
        case 3:
            translatedDay = "星期三 (Wednesday)";
            break;
        case 4:
            translatedDay = "星期四 (Thursday)";
            break;
        case 5:
            translatedDay = "星期五 (Friday)";
            break;
        case 6:
            translatedDay = "星期六 (Saturday)";
            break;
        case 7:
            translatedDay = "星期日 (Sunday)";
            break;
        default:
            translatedDay = "翻译失败！";
    }

    cout << translatedDay << endl;
    return 0;
}

