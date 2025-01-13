#include <iostream>
using namespace std;

int main(){
	
	int num1,num2;
	cout << "请输入第一个数：";
	cin >> num1;
	cout << "请输入第二个数：";
	cin >>  num2;
	
	if (num1 < num2){
		num1 = num2;
	} 
	cout <<  "较大的数字是：" << num1;

	return 0;
}
