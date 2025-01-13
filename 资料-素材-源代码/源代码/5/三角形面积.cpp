#include <iostream>
using namespace std;

int main(){
	
	int length,height,area;
	cout << "请输入三角形的底边长？" << endl;
	cin >>  length;
	cout << "请输入三角形的高？" << endl;
	cin >>  height;
	cout << "三角形的面积是：" << endl;
	area = length * height / 2;   
	cout << area << endl;
	
	return 0;
}
