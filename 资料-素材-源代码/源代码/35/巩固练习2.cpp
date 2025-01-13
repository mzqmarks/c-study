#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 6;
    while (x > 3 && y < 10) {
        cout << "条件1成立" << endl;
        x--;
        y++;
    }
    while (x < 2 || y > 7) {
        cout << "条件2成立" << endl;
        x++;
        y--;
    }
    while (!(y > 6)) {
        cout << "条件3成立" << endl;
        x++;
    }
    return 0;
}

