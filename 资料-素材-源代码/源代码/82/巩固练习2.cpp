#include <iostream>
using namespace std;
int main(){
	int a=8,b=12;
	int *p1=&a,*p2=&b;
	
	*p1=a+b;
	*p2=a+b;
	cout << a << " " << b; 
	return 0; 
}

