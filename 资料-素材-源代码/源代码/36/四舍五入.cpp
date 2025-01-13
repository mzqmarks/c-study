#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numerator, denominator, precision;

    cout << "请输入被除数: ";
    cin >> numerator;

    cout << "请输入除数: ";
    cin >> denominator;

    cout << "请输入计算结果的小数位数: ";
    cin >> precision;

    if (denominator == 0) {
        cout << "除数不能为0，请重新运行程序。" << endl;
    }

    int integerPart = numerator / denominator;
    int remainder = numerator % denominator;

    cout << "计算结果为: " << integerPart;

    if (precision > 0) {
        cout << ".";
    }

    while (precision > 0) {
    	precision--;
        remainder *= 10;
        int quotient = remainder / denominator; 
        remainder = remainder % denominator;
        
        if (precision == 0) {
        	remainder *= 10;
        	int roundDigit = remainder / denominator;
        	if (roundDigit >= 5){
        		quotient++;
			}
        }
        cout << quotient;
    }
    return 0;
}

