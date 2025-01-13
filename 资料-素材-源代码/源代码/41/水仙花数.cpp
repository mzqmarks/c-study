 #include <iostream>
#include <math.h>
using namespace std;
int main() {

	// 1、先打印三位数字
	int num = 100;
	do
	{
		// 2、从所有三位数中找到水仙花数
		// 使用pow(x, y)，可算出x的y次幂；需要引入 math.h 头文件
		int a = pow( (num % 10), 3); // 获取个位数的 3 次幂
		int b = pow( ((num / 10) % 10), 3); // 获取十位数的 3 次幂
		int c = pow( (num / 100), 3); // 获取百位数的 3 次幂

		if ((a + b + c) == num) // 如果是水仙花才打印
		{
			cout << num << endl;
		}
		num++;
	} 
	while (num < 1000);
	return 0;
}

