#include <iostream>
using namespace std;

int main(){
	
	char c;
	int asciiNum;
	
	cout << "请输入一个数字："; 
	cin >> asciiNum;
	c = asciiNum;
	
	cout << asciiNum << " ASCII编码对应的字符是：" << c << endl; 
	return 0;
}
