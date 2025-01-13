#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int add1,add2,sum;

	add1 = 12;
	add2 = 5;
	sum = add1 + add2;
	
	cout << add1 << setw(12) << endl; 
	cout << "+" << setw(8) << add2 << endl; 
	cout << "----------------" << endl; 
	cout << setw(12) << sum << endl; 

	return 0;
}

