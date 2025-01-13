#include <iostream>
using namespace std;

int main() {
    int x = 30;

    if (x > 5) {
        cout << "x大于5" << endl;

        if (x < 15) {
            cout << "x小于15" << endl;
        } else {
            cout << "x不小于15" << endl;
        }
    }

    return 0;
}

