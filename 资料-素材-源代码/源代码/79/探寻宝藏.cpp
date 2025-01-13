#include <iostream>
using namespace std;
int main(){
	string str;
	string *strp;
	str = "БІВи";
	strp = &str;
	
	cout << str << endl;
	cout << strp << endl;
	cout << *strp << endl;
	return 0;
}

