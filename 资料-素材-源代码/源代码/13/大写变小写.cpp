#include <iostream>
using namespace std;

int main(){
	
	char uppercase,lowercase ;
	
	cout << "请输入大写字母："; 
	cin >> uppercase; 
	lowercase = uppercase + 32;
	
	cout << uppercase << "的小写是：" << lowercase << endl; 
	return 0;
}
