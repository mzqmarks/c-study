#include <iostream>
using namespace std;

int main(){
	
	char uppercase,lowercase ;
	
	cout << "请输入小写字母："; 
	cin >> lowercase; 
	uppercase = lowercase - 32;
	
	cout << lowercase << "的大写是：" << uppercase << endl; 
	return 0;
}

