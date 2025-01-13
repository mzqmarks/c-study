#include <iostream>
using namespace std;
int main(){
	int i=1,j=2;
	int *p=&i;
	p = &j;
	i = *p;
	cout << i << endl;
	cout << p;
	return 0;
}

