#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 9; i++) {        // 百位数循环
        for (int j = 0; j <= 9; j++) {    // 十位数循环
            for (int k = 0; k <= 9; k++) { // 个位数循环
                int number = i * 100 + j * 10 + k;
                int sum_of_cubes = i * i * i + j * j * j + k * k * k;
                if (number == sum_of_cubes) {
                    cout << number << " ";
                }
            }
        }
    }
    cout << endl;
    return 0;
}

