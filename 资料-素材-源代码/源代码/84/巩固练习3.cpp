#include <iostream>
using namespace std;
int main(){
	int n=3;
	int *p1=&n,*p2=&n; 
	cout << *p1+n+*p2;
	return 0;
}

