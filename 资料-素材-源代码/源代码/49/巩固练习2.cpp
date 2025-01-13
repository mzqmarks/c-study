#include <iostream>
using namespace std;
int main() {
    for (int i = -5; i <= 5; i++) {
        if (i < 0) {
            continue; // Ìø¹ý¸ºÊý
        }
        cout << i << " ";
    }
    return 0;
}

