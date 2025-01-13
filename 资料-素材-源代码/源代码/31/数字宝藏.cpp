#include <iostream>
using namespace std;

int main() {
	int num,sum;
	num = 0;
	sum = 0;
	while(num!=-1){
		sum = sum + num;
		cout << "请输入要相加的数字：";
		cin >> num;		
	}
	cout << "最终的计算结果是：" << sum;
    return 0;
}

