#include <iostream>
using namespace std;
int main() {
    int num1, num2,temp;
    cout << "请输入两个整数: ";
    cin >> num1 >> num2;
    if(num1 >= num2){
		temp = num1 % num2;
		if(temp!=0){
			while(temp!=0){
				num1 = temp;
				temp = num2 % num1;
				num2 = num1;
			}		
		}
		cout << "最大公约数是: " << num2;
	}
	else{
		temp = num2 % num1;
		if(temp!=0){
			while(temp!=0){
				num2 = temp;
				temp = num1 % num2;
				num1 = num2;
			}		
		}
		cout << "最大公约数是: " << num1;
	}
    return 0;
}

