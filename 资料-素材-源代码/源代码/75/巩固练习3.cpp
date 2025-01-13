#include <iostream>
using namespace std;

int num = 1;
int add(int num){
	for(int i=0;i<10;i++){
		num++;
	}
	return num;
}
int main(){
	cout << num << endl;
	cout << add(num) << endl;
	num = 10;
	cout << add(num) << endl;
} 

