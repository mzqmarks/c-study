#include <iostream>
#include <string>
using namespace std;
int main(){
	
	float num1,num2; 
	string symbol;
	
	while(true){
		cout << "输入第一个数字：";
		cin >> num1; 
		cout << "输入算术运算符(+、-、*、/)："; 
		cin >> symbol;
		cout << "输入第二个数字：";
		cin >> num2;
		
		if(symbol=="+"){
			cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
		}
		else if(symbol=="-"){
			cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
		}
		else if(symbol=="*"){
			cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
		}
		else if(symbol=="/"){
			if(num2!=0)
				cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
			else{
				cout << "除数不能为零。" << endl; 
			}
		}
		else if(symbol=="#"){
			cout << "结束计算！" << endl; 
			break;
		}
		else{
			cout << "请输入正确的算术运算符！" << endl; 
		}
	}		

	return 0;
}

