#include <iostream>
using namespace std;
int main() {
    int total_fruits;
    double total_weight;
    bool answer = false; 
    cin >> total_fruits;
    cin >> total_weight;
    double apple_weight = 0.2;
    double pear_weight = 0.25; 

    int apple_count = 0;
    int pear_count = 0;

    // 使用for循环计算每种水果的数量
    for (int i = 0; i <= total_fruits; i++) {
        apple_count = i;
        pear_count = total_fruits - i;
        if (apple_count * apple_weight + pear_count * pear_weight == total_weight) {
            // 如果计算的总重量等于输入的总重量，找到一个有效的解 
            cout << apple_count << " " << pear_count;
            answer = true;
            break;
        }
    }

    if (!answer) {
        cout << "无解" << endl;
    }

    return 0;
}

