#include <iostream>
using namespace std;

int main() {
    int num1, num2,maxNum,minNum,lcm=1,i=1;
    
    cout << "请输入第一个整数: ";
    cin >> num1;
    cout << "请输入第二个整数: ";
    cin >> num2;
    
    maxNum = (num1 > num2) ? num1 : num2; 
    minNum = (num1 < num2) ? num1 : num2; 
    while (true) {
    	lcm = maxNum * i;
    	if(lcm % minNum == 0){
    		break;
		}
		i++;  
    }
    cout << "最小公倍数为: " << lcm << endl;
    return 0;
}

