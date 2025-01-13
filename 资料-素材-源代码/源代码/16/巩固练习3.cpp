#include <iostream>
using namespace std;

int main(){

	int num,count;
	
	while (true){
		cout << "请输入数字："; 
	 	cin >> num;
		if (num%2 == 0) {
			count++; 
		}
		cout << "输入数字中偶数的数量：" << count << endl;
	}
	return 0;
}

