#include <iostream>
using namespace std;
int main(){
	
	int isOk;
	string speedboat;
	cout << "有票请输入1："; 
	cin >> isOk;
	
	if(isOk==1){
		cout << "请进！"; 
		cout << "请输入票类型（普通、商务）：";
		cin >> speedboat;
		if(speedboat=="普通"){
			cout << "请走左边乘坐普通快艇。"; 
		}
		else if(speedboat=="商务"){
			cout << "请走右边乘坐商务快艇。"; 
		} 
		else{
			cout << "请按要求输入！"; 
		}
	}
	else{
		cout << "请先购票！"; 
	} 
	return 0;
}

