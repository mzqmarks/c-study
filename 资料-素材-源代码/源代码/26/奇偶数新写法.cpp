#include <iostream>
using namespace std;
int main(){
	
	int num;
	while(true){
		cout << "输入数字："; 
		cin >> num;
		num % 2 == 0 ? cout << "这是偶数" << endl : cout << "这是奇数" << endl; 
	}	 
	return 0;
}

