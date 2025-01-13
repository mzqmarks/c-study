#include <iostream>
using namespace std;
int main(){
	string str1="Hello",str2="world";
	string *p1=&str1,*p2=&str2,*p;
	
	p = p1;
	p1 = p2;
	p2 = p;
	
	cout << *p1 << " " << *p2<< endl;
	cout << str1 << " " << str2<< endl;
	return 0; 
}

