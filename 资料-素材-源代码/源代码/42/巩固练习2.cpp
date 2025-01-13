#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, count = 0;
    cout << "请输入一系列整数：" << endl;
    
    do{
    	cin >> num;
        if (num > 0) {
        	sum += num;
        }
        count++; 
	} while (count<5);
    if (count > 0) {
        double average = sum / count;
        cout << "平均值：" << average << endl;
    } else {
        cout << "没有输入有效的整数。" << endl;
    }

    return 0;
}

