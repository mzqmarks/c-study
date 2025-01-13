#include <iostream>
using namespace std;

int main(){
	
	int upperSole,bottom,height,area;
	cout << "请输入梯形的上底？" << endl;
	cin >>  upperSole;
	cout << "请输入梯形的下底？" << endl;
	cin >>  bottom;
	cout << "请输入梯形的高？" << endl;
	cin >>  height;
	cout << "梯形的面积是：" << endl;
	area = (upperSole + bottom) * height / 2;
	cout << area << endl;
	
	return 0;
}

