#include <iostream>
using namespace std;
int main() {
    char choice;
    cout << "请投票y或者n: ";
    cin >> choice;

    switch (choice) {
        case 'y':
            cout << "你投了赞成票。";
            break;
        case 'n':
            cout << "你投了反对票。";
            break;
        default:
            cout << "无效票，视为弃权。";
            break;
    }
    return 0;
}

