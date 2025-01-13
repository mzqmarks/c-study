#include <iostream>
using namespace std;
int main(){
	int num,i=1;
	cout << "请输入一个正整数：";
	cin >> num;
	
	while(num > 0){
		if (num % 3 == 0){
			num += 2;
		}
		else{
			num -= 3; 
		}
		i++;
	} 	
	cout << i; 
	return 0;
}

