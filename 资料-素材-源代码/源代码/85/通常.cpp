#include <iostream>
using namespace std;
void moveHouse(char ch1,char ch2){
	char ch;
	ch = ch1;
	ch1 = ch2;
	ch2 = ch;
}
int main(){
	char a='A',b='B';
	moveHouse(a,b);
	cout << a << ' ' << b;
	return 0;
}

