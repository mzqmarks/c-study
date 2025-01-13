#include <iostream>
using namespace std;
int main(){
	int num1,num2, *num1p, *num2p;
	num1p = &num1;
	num2p = &num2;
	
	num1 = 2023;
	num2 = 2022;
	
	cout << *num1p + *num2p;
	return 0;
}

