#include <iostream>
using namespace std;
int main(){
	int i=6,j=8;
	int *p1,*p2,*temp;
	p1 = &i;
	p2 = &j;
	
	temp = p1;
	p1 = p2;
	p2 = temp;
	cout << *p1 << " " << *p2 << endl;
	cout << i << " " << j << endl;
	return 0;
}

