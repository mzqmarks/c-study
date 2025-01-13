#include <iostream>
using namespace std;

int main(){
	/*声明即将要用到的变量 
	num:输入的数字
	unitsDigit:个位数字
	tensDigit:十位数字
	hundredsDigit:百位数字
	sum:求和
	*/ 
	int num,unitsDigit,tensDigit,hundredsDigit,sum;
	
	cin >> num;
	hundredsDigit = num / 100;   //求百位的数字 
	tensDigit = num % 100 / 10;  //求十位的数字 
	unitsDigit = num % 10;	     //求个位的数字 
	sum =  hundredsDigit + tensDigit + unitsDigit;
	printf("%d + %d + %d = %d",hundredsDigit,tensDigit,unitsDigit,sum);
	 
	return 0;
}
