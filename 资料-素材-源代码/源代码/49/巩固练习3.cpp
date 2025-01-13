#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 0) {
            continue; // Ìø¹ý±àºÅÎ²ÊýÎª0µÄ¹óåúÃ¢
        }
        cout << i << ",";
    }

    return 0;
}

