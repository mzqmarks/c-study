#include <iostream>
using namespace std;

int main() {
    int num1, num2,maxNum,lcm=1,i=1;
    
    cout << "请输入第一个整数: ";
    cin >> num1;
    cout << "请输入第二个整数: ";
    cin >> num2;
    
    maxNum = (num1 > num2) ? num1 : num2; // 取两个数中的较大值
    while (true) {
    	lcm = maxNum * i;
    	if(lcm % num1 == 0 && lcm % num2 == 0){
    		break;
		}
		i++;  
    }
    cout << "最小公倍数为: " << lcm << endl;
    return 0;
}

