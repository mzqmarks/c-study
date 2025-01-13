#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int num=123;	
	num = num % 100 / 10;	
	num = pow(num,3);	
	if (num > 10) {
		cout << "1"; 
	}
	if (num > 5) {
		cout << "2"; 
	}
	if (num > 0) {
		cout << "3"; 
	}
	return 0;
}

