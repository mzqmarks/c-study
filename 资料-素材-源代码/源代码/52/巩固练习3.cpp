#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // 输入初始质量和衰变率
    double initialMass = 1.0; // 初始质量1克
    double speed = 0.5;   // 衰变率每小时减少50%
    double minMass = 0.00001; // 最小剩余质量0.00001克

    // 初始化时间和当前质量
    int hour = 0;
    double currentMass = initialMass;
    // 模拟衰变过程，直到质量小于最小剩余质量
    while (currentMass>=minMass) {
        // 更新时间和质量
        hour++; // 模拟1小时
        currentMass *= speed; // 衰变
    }
    // 输出满足条件的小时数
    cout << "需要：" << hour << "小时" << endl;

    return 0;
}

