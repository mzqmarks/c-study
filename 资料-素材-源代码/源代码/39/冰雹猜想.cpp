#include <iostream>
using namespace std;
int main(){
	int num,i=0;
	cout << "请输入一个正整数：";
	cin >> num;
	
	while(num != 1){
		cout << num << "→"; 
		if (num % 2 == 0){
			num /= 2;
		}
		else{
			num = 3 * num + 1;
		}
		i++;
	} 	
	cout << "1，路径长度为：" << i; 
	return 0;
}

