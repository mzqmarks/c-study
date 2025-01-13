#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int teamSize = 3; // 每队的人数
    int totalPlayers = 18; // 总共的小精灵数量
    for (int i = 1; i <= totalPlayers; i++) {
        cout << setw(2) << i << " ";
        if (i % teamSize == 0) {
            cout << endl;
        }
    }
    return 0;
}

