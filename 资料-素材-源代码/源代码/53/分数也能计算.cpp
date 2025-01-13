#include <iostream>
using namespace std;
int main(){
	
	int numerator,denominator,numerator1,denominator1, numerator2,denominator2;
	cout << "输入第一个分数(分子 分母)：";
	cin >> numerator1 >> denominator1;
	cout << "输入第二个分数(分子 分母)：";
	cin >> numerator2 >> denominator2;
	
	//通分求和，lcm是最小公倍数 
	int lcm = (denominator1 > denominator2) ? denominator1 : denominator2; 
	while (true) {
    	if(lcm % denominator1 == 0 && lcm % denominator2 == 0){
    		break;
		}
        lcm++;
    }
	
	numerator = numerator1 * (lcm/denominator1) + numerator2 * (lcm/denominator2);
	denominator = lcm;
	
	//约分简化,最终num1是最大公约数 
	int num1=numerator, num2=denominator,temp;
    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

	cout << numerator/num1 << endl;
	cout << "-" << endl; 
	cout << denominator/num1 << endl;
	
	return 0;
}
