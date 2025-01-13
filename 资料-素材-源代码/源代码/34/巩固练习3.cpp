#include <iostream>
using namespace std;

int main() {
    int numScores;
    // 输入要输入的分数数量
    cout << "请输入要输入的分数数量: ";
    cin >> numScores;
    
    float score, min = 100, max = 0, sum = 0;
    int num = 0;
    
    while (num < numScores) {
        cout << "请输入得分：" << endl;
        cin >> score;
        
        if (score >= 0 && score <= 100) {
            sum += score;
            num++;
            
            if (score > max) {
                max = score;
            }
            
            if (score < min) {
                min = score;
            }
        } else {
            cout << "分数在0~100之间，请重新输入" << endl;
        }
    }
    
    if (num > 0) {
        float average = (sum - max - min) / (num - 2);
        cout << "最终计算平均分是：" << average << endl;
    } else {
        cout << "没有有效的分数输入。" << endl;
    }

    return 0;
}

