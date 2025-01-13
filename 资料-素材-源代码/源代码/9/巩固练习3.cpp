#include <iostream>
using namespace std;

int main(){
	
	int a,b,c,d; 
	int e; 

	a = 8;
	b = 0;
	c = 5;
	d = 2;
	
	e = a;
	a = d;
	d = e;
	
	cout << a << b << c << d << endl; 
	
	return 0;
}
