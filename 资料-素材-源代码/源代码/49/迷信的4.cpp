#include <iostream>
using namespace std;
int main(){	
	int num1,num2,num;
	cout << "请输入两个正整数：";
	cin >> num1 >> num2;	
	if(num1 > num2){
		int temp = num1;
		num1 = num2;
		num2 = temp; 
	} 	
	for(int i = num1; i<=num2;i++){
		if(i%10==4){
			continue; // 如果尾数为4，跳过这个数字
		}
		cout << i << " ";
	}
	return 0;
}

