#include <iostream>
using namespace std;

int main() {
	float score,sum = 0;
	int num = 0;
	while(num < 8){
		cout << "请输入得分：";
		cin >> score;
		sum = sum + score;
		num++; 
	}
	cout << "最终计算平均分是：" << sum/num;
    return 0;
}

