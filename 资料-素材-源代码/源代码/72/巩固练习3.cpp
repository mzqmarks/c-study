#include <iostream>
using namespace std;

int add(){
	int a=8,b=6,c=9,temp;
	temp = c;
	c = b;
	b = temp;
	return a+b;
}
int main(){
	int a = 10;
	cout << add();
	return 0;
}

