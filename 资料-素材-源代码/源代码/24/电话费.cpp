#include <iostream>
using namespace std;
int main(){
	
	int minute=0;
	int second=0;
	cout << "输入通话时长（分钟），计算话费。"  << endl; 
	cout << "输入分钟数：";
	cin >> minute;
	cout << "输入秒钟数："; 
	cin >> second;
	
	if(second > 0){
		minute = minute + 1;
	}
	if(minute == 0){
		cout << "0"; 
	}
	else if(minute <= 2){
		cout << "1.5"; 
	}
	else{
		cout << (minute - 2) * 0.2 + 1.5;
	}
	return 0;
}

//向上取整ceil()
//向下取整floor()
//四舍五入round() 

