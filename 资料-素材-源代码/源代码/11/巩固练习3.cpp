#include <iostream>
using namespace std;

int main(){
	/*声明即将要用到的变量 
	password:密码 
	encryption:加密密码 
	*/ 
	int password,encryption;
	password = 0;
	cin >> encryption;
	password += encryption / 1000 * 100;  //原千位数字作为百位
	password += encryption / 100 % 10;    //原数字百位作为个位 
	password += encryption % 10 * 10;     //原数字个位作为十位	     

	printf("破解密码是：%d",password);
	 
	return 0;
}
