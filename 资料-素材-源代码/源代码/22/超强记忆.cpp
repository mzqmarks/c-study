#include <iostream>
using namespace std;
int main(){
	
	int num,max;
	max = 0;
	
	while(true){
		cout << "请输入数字：";
		cin >> num;
		if(num > max){
			max = num;
		}
		if(num == 0){
			cout << "最大的数字是：" << max; 
			break;
		}
	}
		 
	return 0;
}

