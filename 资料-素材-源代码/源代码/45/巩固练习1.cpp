#include <iostream>
using namespace std;
int main() {
    int num1=1, num2=10;
    /*
    if (num1 > num2) {
		int temp = num1;
		num1 = num2;
   		num2 = temp;
	}
	*/
	/*
	num1 = (num1<num2)?num2:num1;
	num2 = (num1<num2)?num1:num2;
	*/
	/*
	int temp = (num1<num2)?num2:num1;
	num1 = temp;
	*/
	if (num1 < num2) {
		int temp = num1;
		num1 = num2;
   		num2 = temp;
   	}
	
	

	cout << num1 << endl;
	cout << num2 << endl; 
	return 0;
}

