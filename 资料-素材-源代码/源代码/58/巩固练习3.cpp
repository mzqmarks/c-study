#include <iostream>
using namespace std;
int main(){
	int num1,num2; 
	cout << "请输入两个正整数：";
	cin >> num1 >> num2;
	//防止num1 > num2 
	if(num1 > num2){
		int temp = num2;
		num2 = num1;
		num1 = temp;
	}
	for(int i=num1;i<=num2;i++){
		int count = 0; 
		for(int j=2; j<i;j++){
			if(i%j==0){
				count = 1; 
				break;
		 	}
		}
		if(count==0){
			//1既不是质数也不是合数 
			if(i!=1){
				cout << i << " ";	
			}	
		}
	}
	return 0;
}

