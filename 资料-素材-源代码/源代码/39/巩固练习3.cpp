#include <iostream>
using namespace std;
int main(){
	int num,i = 1; 
	bool have = false;
	cout << "输入一个正整数：";
	cin >> num; 
	while(i <= num){
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
			cout << i << endl; 
			have = true;
		}
		i++;
	} 	
	if(!have){
		cout << "找不到符合条件的数字。"; 
	}
	return 0;
}

