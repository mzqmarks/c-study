#include <iostream>
using namespace std;

int main(){
	
	char c;
	int asciiNum;
	
	cout << "请输入一个字符："; 
	cin >> c;
	asciiNum = c;
	
	cout << c << "的ASCII编码是：" << asciiNum << endl; 
	return 0;
}

