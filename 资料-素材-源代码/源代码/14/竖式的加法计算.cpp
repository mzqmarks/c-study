#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int add1,add2,sum;
	
	cout << "请输入第一个加数:";
	cin >> add1;
	cout << "请输入第二个加数:";
	cin >> add2;
	sum = add1 + add2;
	
	cout << setw(12) << add1 << endl;
	cout << setw(4) << "+" << setw(8) << add2 << endl;
	cout << "----------------" << endl;
	cout << setw(12) << sum << endl;

	return 0;
}


