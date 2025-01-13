#include <iostream>
using namespace std;

int main(){
	/*声明即将要用到的变量 
	num:输入的数字
	newNum:新数字 
	*/ 
	int num,newNum;
	newNum = 0;
	cin >> num;
	newNum += num % 10 * 100;       //原数字个位 ×100
	newNum += num % 100 / 10 * 10;  //原数字十位 ×10 
	newNum += num / 100;            //原数字百位 	     

	printf("原数字是：%d，倒过来的新数字是：%d",num,newNum);
	 
	return 0;
}

