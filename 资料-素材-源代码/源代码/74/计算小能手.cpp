#include <iostream>
#include <string>
using namespace std;

void answer(float num1,float num2,char symbol){
	if(symbol=='+'){
		cout << num1 << '+' << num2 << '=' << num1+num2 << endl;
	}
	else if(symbol=='-'){
		cout << num1 << '-' << num2 << '=' << num1-num2 << endl;
	}
	else if(symbol=='*'){
		cout << num1 << '*' << num2 << '=' << num1*num2 << endl;
	}
	else if(symbol=='/'){
		if(num2!=0)
			cout << num1 << '/' << num2 << '=' << num1/num2 << endl;
		else{
			cout << "除数不能为零。" << endl; 
		}
	}
	else{
		cout << "请输入正确的算术运算符！" << endl; 
	}
}

int main(){
	
	int num1,num2;
	char symbol;
	cout << "输入第一个数字：";
	cin >> num1; 
	cout << "输入算术运算符(+、-、*、/)："; 
	cin >> symbol;
	cout << "输入第二个数字：";
	cin >> num2;
	answer(num1,num2,symbol);

	return 0;
}

