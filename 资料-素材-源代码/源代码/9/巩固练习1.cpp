#include <iostream>
using namespace std;

int main(){
	
	int a,b,c; 
	
	a = 2023;
	b = 8080;
	
	c = b;
	a = c;
	b = a;
	//b = a;
	//a = c;
	
	cout << a << "  " << b << endl; 
	
	return 0;
}


