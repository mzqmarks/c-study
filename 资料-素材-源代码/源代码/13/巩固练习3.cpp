#include <iostream>
using namespace std;

int main(){
	
	char uppercase,lowercase ;
	int  lowercaseNum;
	
	cout << "请输入小写字母："; 
	cin >> lowercase; 
	lowercaseNum = lowercase;
	uppercase = lowercase - 32;
	
	cout << lowercase << "的ASCII编码是：" << lowercaseNum << "，大写是：" << uppercase << endl; 
	return 0;
}
