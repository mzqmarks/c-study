#include <iostream>
using namespace std;

int main(){

	int num;
	cout << "请输入要判断的数字："; 
	cin >> num;
	if (num%2 == 0) {
		cout << num << "是偶数！"; 
	}
	if (num%2 != 0) {
		cout << num << "是奇数！"; 
	}
	return 0;
}





