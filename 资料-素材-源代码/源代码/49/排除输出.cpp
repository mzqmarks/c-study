#include <iostream>
using namespace std;
int main() {
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            continue; // Ìø¹ýÔªÒô×ÖÄ¸
        }
        cout << ch << " ";
    }
    return 0;
}

