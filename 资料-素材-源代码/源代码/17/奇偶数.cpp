#include <iostream>
using namespace std;

int main(){
	
	int num;
	cout << "请输入整数：";
	cin >> num;
	
	if (num % 2 == 0){
		cout << num << "是偶数。";
	} 
	else {
		cout << num << "是奇数。"; 
	}
	
	return 0;
}

