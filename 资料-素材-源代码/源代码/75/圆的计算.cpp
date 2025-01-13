#include <iostream>
using namespace std;
//设定π的值 
const float pi = 3.14;
//计算圆面积 
float area(float radius){
	radius = 2;
	return pi * radius * radius;
}
//计算圆周长 
float perimeter(float radius){
	return 2 * pi * radius;
}
int main(){
	float radius;
	cin >> radius;
	cout << "圆面积是：" << area(radius)<< endl;
	cout << "圆周长是：" << perimeter(radius) << endl;
} 

