#include <iostream>
using namespace std;
int main() {
    const int classSize = 9;
    int studentNumbers[classSize];
    for (int i = 0; i < classSize; i++) {
        cin >> studentNumbers[i];
    }
    // 输入要查找的学生学号
    int searchNumber;
    cin >> searchNumber;
    // 判断学生是否在班级中
    bool found = false;
    for (int i = 0; i < classSize; i++) {
        if (studentNumbers[i] == searchNumber) {
            found = true;
            break; // 学生已找到，不再继续搜索
        }
    }
    // 输出结果
    if (found) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}

