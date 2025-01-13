#include <iostream>
using namespace std;
int main(){
	int num,is=1;
	cout << "请输入正整数：";
	cin >> num;
	for(int i=2; i<num;i++){
		if(num%i==0){
			is=0;
			break;
		}
	}
	
	if(is){
		cout << "我是质数。"; 
	}
	else{
		cout << "我不是质数。"; 
	}
	return 0;
}

