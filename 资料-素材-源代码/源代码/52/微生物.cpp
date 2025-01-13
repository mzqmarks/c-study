#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // 初始微生物数量
    double initialQuantity = 1;
    // 每小时裂变一次 
    double speed = 2.0;
    // 小时数
    int hours = 24; 
    // 设置输出精度
    cout << setprecision(2);
    // 微生物的数量
    double total = initialQuantity;
    for (int hour = 1; hour <= hours; hour++) {
        total *= speed; // 增长
        cout << hour << "小时，微生物数量是：" << total << endl;
    }
    return 0;
}

