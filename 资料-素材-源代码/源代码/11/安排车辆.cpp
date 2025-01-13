#include <iostream>
using namespace std;

int main(){
	
	int count,bus,car;
	
	count = 126;
	bus = count / 20;      //思考分析的第一步（1）
	car = count % 20 / 6;   //思考分析的第二步（2）
	cout << "需要大巴：" <<  bus << "辆" << endl;
	cout << "需要商务车：" <<  car << "辆" << endl;

	return 0;
}

