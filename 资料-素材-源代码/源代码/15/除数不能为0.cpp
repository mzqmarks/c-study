#include <iostream>
using namespace std;

int main(){
	
	float dividend,divisor,quotient;
	cout << "请输入被除数：";
	cin >> dividend;
	cout << "请输入除数：";
	cin >>  divisor;
	
	if (divisor != 0){
		quotient = dividend / divisor;
		cout << dividend << " ÷ " << divisor << " = " << quotient << endl;
	} 
	
	cout << "要注意除数不能为0！"; 
	
	return 0;
}

