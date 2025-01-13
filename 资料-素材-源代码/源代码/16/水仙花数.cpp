#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/*
	声明即将要用到的变量 
	num:输入的数字
	unitsDigit:个位数字
	tensDigit:十位数字
	hundredsDigit:百位数字 
	*/ 
	int num,unitsDigit,tensDigit,hundredsDigit,sum;
	
	cout << "请输入要判断的数字："; 
	cin >> num;
	hundredsDigit = num / 100;   //求百位的数字 
	tensDigit = num % 100 / 10;  //求十位的数字 
	unitsDigit = num % 10;	     //求个位的数字 
	
	sum = pow(unitsDigit,3) + pow(tensDigit,3) + pow(hundredsDigit,3);
	
	if (num == sum) {
		cout << num << "是水仙花数！"; 
	}
	return 0;
}






