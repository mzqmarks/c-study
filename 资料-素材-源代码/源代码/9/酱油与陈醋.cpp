#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string vinegar,soy,empty;
	
	vinegar = "酱油";
	soy = "陈醋";
	
	cout << "vinegar的值是：" <<  vinegar << endl; 
	cout << "soy的值是：" <<  soy << endl; 
	
	empty = vinegar;
	vinegar = soy;
	soy = empty;
	
	cout << "交换以后" << endl; 
	cout << "vinegar的值是：" <<  vinegar << endl; 
	cout << "soy的值是：" <<  soy << endl; 
	
	return 0;
}

