#include <iostream>
using namespace std;

int main() {
    int num1, num2,lcm=1;
    
    cout << "请输入第一个整数: ";
    cin >> num1;
    cout << "请输入第二个整数: ";
    cin >> num2;
    
    lcm = (num1 > num2) ? num1 : num2; // 取两个数中的较大值
    while (true) {
    	if(lcm % num1 == 0 && lcm % num2 == 0){
    		break;
		}
        lcm++;
    }
    cout << "最小公倍数为: " << lcm << endl;
    return 0;
}

