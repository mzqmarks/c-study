#include <iostream>
using namespace std;

int main(){
	
	int age;
	cout << "请输入年龄：";
	cin >> age;
	
	if(age<7){
		cout << "婴幼儿"; 
	}
	else if(age<13){
		cout << "少儿"; 
	}
	else if(age<18){
		cout << "青少年"; 
	}
	else if(age<46){
		cout << "青年"; 
	}
	else if(age<70){
		cout << "中年"; 
	}
	else{
		cout << "老年"; 
	} 
	return 0;
}

