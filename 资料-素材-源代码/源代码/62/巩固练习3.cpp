#include <iostream>
using namespace std;

int main() {
    int height;
    cin >> height;
    // 上半部分
    for (int i = 1; i <= height; i += 2) {
        int spaces = (height - i) / 2;
        int stars = i;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // 下半部分
    for (int i = height - 2; i >= 1; i -= 2) {
        int spaces = (height - i) / 2;
        int stars = i;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

