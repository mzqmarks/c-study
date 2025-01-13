#include <iostream>
using namespace std; 
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3 || i == 7) {
            continue; // 排除值为3和7的情况
        }
        cout << i << " ";
    }
    return 0;
}

