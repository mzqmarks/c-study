#include <iostream>
using namespace std;

int main(){
	int price,count;  
	cout << "请输入商品单价？" << endl;
	cin >> price;
	cout << "请输入购买数量？" << endl;
	cin >> count;
	cout << "商品总金额是：" << endl;
	cout << price * count; 
	return 0; 
}

