#include <iostream>
using namespace std;

int main() {
    double numUp = 1, numDown = 1;
    int i = 0;

    while (i < 365) {
        numUp *= 1.01; // 每天努力一点点
        numDown *= 0.99; // 每天懈怠一点点
        i++;
    }

    cout << "每天努力一点点，一年后，你的财务状况增加了 " << numUp << " 倍" << endl;
    cout << "每天懈怠一点点，一年后，你的财务状况减少了 " << 1/numDown << " 倍" << endl;

    return 0;
}

