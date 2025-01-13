#include <iostream>
using namespace std;
int main() {
    int num, count = 0;
    double sum = 0; 
    // 用while循环来实现
    while (num >= 0) { // 请填写此处的条件，使循环继续直到输入负数
        // 输入一个整数
        cout << "请输入一个整数（负数以结束输入）: ";
        cin >> num;
        
        if (num >= 0) {
            // 计算和
            sum += num;
            count++; // 更新count的值
        }
    }
  
    // 计算平均值
    double average = sum / count; // 计算平均值 
    // 显示平均值
    cout << "所有正整数的平均值是: " << average << endl;  
    return 0;
}

