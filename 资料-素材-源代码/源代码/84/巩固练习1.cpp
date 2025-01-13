#include <iostream>
using namespace std;
void sum(int x,int y,int *z){
	*z = x + y;
}
int main(){
	int a=1,b=2;
	sum(2,6,&a);
	sum(a,b,&b);
	cout << a << " " << b;
	return 0;
}

