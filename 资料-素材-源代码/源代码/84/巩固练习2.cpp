#include <iostream>
using namespace std;
int main(){
	int *p,a;
	p = &a;
	cout << &a << " " << p << " " << &*p;
	return 0;
}

