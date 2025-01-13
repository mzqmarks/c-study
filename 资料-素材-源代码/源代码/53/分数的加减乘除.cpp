#include <iostream>
using namespace std;
int main(){
	char operation;
	int is=1,numerator,denominator,numerator1,denominator1, numerator2,denominator2;
	cout << "输入第一个分数(分子 分母)：";
	cin >> numerator1 >> denominator1;
	cout << "输入第二个分数(分子 分母)：";
	cin >> numerator2 >> denominator2;
	cout << "输入运算符(+、-、*、/)：";
	cin >> operation; 
	
	if(operation=='+'){
		numerator = numerator1 * denominator2 + numerator2 * denominator1;
		denominator = denominator1 * denominator2;
	}
	else if(operation=='-'){
		numerator = numerator1 * denominator2 - numerator2 * denominator1;
		denominator = denominator1 * denominator2;
	}
	else if(operation=='*'){
		numerator = numerator1 * numerator2;
		denominator = denominator1 * denominator2;
	}
	else if(operation=='/'){
		numerator = numerator1 * denominator2;
		denominator = denominator1 * numerator2;
	}
	else{
		cout << "符号输入有误！";
		is = 0;
	}
	
	if(is){
		//约分简化,最终num1是最大公约数 
		int num1=numerator, num2=denominator,temp;
    	while (num2 != 0) {
        	temp = num1 % num2;
        	num1 = num2;
        	num2 = temp;
    	}

		cout << numerator/num1 << endl;
		cout << "-" << endl; 
		cout << denominator/num1 << endl;
	}
	return 0;
}
