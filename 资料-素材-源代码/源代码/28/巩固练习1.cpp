#include <iostream>
using namespace std;
int main(){
	
	int num;
	cout << "请输入执行第几步："; 
	cin >> num;
	
	switch(num){
		case 1:
			cout << "已完成第一步。" << endl; 
		case 2:
			cout << "已完成第二步。" << endl;
		default:
			cout << "备选方案已启动！" << endl; 
	}

	return 0;
}

