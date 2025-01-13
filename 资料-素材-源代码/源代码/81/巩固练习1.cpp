#include <iostream>
using namespace std;
int main(){
	char ch[] = {'a','b','c','d','e','f','g'};
	char *p = ch;
	cout << *(p+4);
	return 0;
}



