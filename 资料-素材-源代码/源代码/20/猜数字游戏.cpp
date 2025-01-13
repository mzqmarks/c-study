#include <iostream>
using namespace std;
int main(){
	
	int num,guess;
	num = 36;
	cout << "猜数字范围1~100。" << endl;
	while(true){
		cout << "输入你猜的数字：";
		cin >> guess;
		
		if(guess>num){
			cout << "大了" << endl; 
		}
		else if(guess<num){
			cout << "小了" << endl; 
		}
		else{
			cout << "猜对了" << endl;
			break;
		} 
	}
	return 0;
}

