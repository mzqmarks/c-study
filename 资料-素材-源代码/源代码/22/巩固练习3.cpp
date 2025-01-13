#include <iostream>
using namespace std;
int main(){
	
	int num,min;
	min = 101;
	
	while(true){
		cout << "请输入分数：";
		cin >> num;
		if(num < min){
			min = num;
		}
		if(num == 101){
			cout << "最低分是：" << min; 
			break;
		}
	}
		 
	return 0;
}

