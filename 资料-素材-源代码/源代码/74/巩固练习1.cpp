#include <iostream>
using namespace std;

float answer(float num1,float num2){
	cout << num1 << '/' << num2 << '=' << num1/num2 << endl;
}
int main(){
	
	int num1,num2;
	cout << "输入被除数：";
	cin >> num1; 
	cout << "输入除数：";
	cin >> num2;
	answer(num1,num2);
	return 0;
}

