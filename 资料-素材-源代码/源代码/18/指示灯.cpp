#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string state;
	bool stop;
	cout << "如要停止工作请输入‘停止’："; 
	cin >>  state;
	
	stop = state == "停止"; 
	cout << stop << endl;
	cout << !stop << endl; 
	if(!stop) {
		cout << "继续工作，指示灯亮！";
	}
	else {
		cout << "停止工作，指示灯熄灭！"; 
	}
	return 0;
}

