#include <iostream>
using namespace std;

int main(){
	
	int num,total;	
	const int PRICE1=62,PRICE2=58,PRICE3=50,PRICE4=45;
	cout << "请输入牛奶采购数量：";
	cin >> num;
	
	if (num < 5){
		total = num * PRICE1;
	} 
	else if(num < 20){
		total = num * PRICE2;
	}
	else if(num < 100){
		total = num * PRICE3;
	}
	else{
		total = num * PRICE4;
	}
	cout << "总共采购费用为：" << total;
	return 0;
}

