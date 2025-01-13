#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "请输入一个月份（1-12）：";
    cin >> month;

    switch (month) {
        case 1:
        case 2:
        case 12:
            cout << "十二月到二月是冬季。在冬季，寒冷的天气可能会带来冰雪魔法，可能会遇到雪精灵。" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "三月到五月是春季。春季充满生机，可能会有植物魔法，可能会遇到树精。" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "六月到八月是夏季。夏季阳光明媚，可能会有火焰魔法，可能会遇到火精灵。" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "九月到十一月是秋季。秋季可能有风暴魔法，可能会遇到风精灵。" << endl;
            break;
        default:
            cout << "无效的月份输入。请输入1-12之间的有效月份。" << endl;
            break;
    }

    return 0;
}

