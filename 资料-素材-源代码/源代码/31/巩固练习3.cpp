#include <iostream>
using namespace std;

int main() {
    double score;
    double total = 0;
    int count = 0;

    cout << "请输入学生的考试成绩，输入-1结束：" << endl;
    cin >> score;

    while (score != -1) {
        total += score; // 累加成绩
        count++;       // 增加学生数量
        cin >> score;  // 继续输入下一个学生的成绩
    }

    if (count > 0) {
        double average = total / count;
        cout << "班级考试成绩的平均值为：" << average << endl;
    } else {
        cout << "没有输入任何成绩。" << endl;
    }

    return 0;
}

