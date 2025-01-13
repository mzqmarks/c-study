#include <iostream>
using namespace std;
int main() {
    int num1, num2,gcd;
    cout << "请输入第一个正整数: ";
    cin >> num1;
    cout << "请输入第二个正整数: ";
    cin >> num2;
    
    gcd = (num1 < num2) ? num1 : num2;
    while (gcd > 0) {
        if (num1 % gcd == 0 && num2 % gcd == 0) {
            break;
        }
        gcd--;
    }   
    cout << "最大公约数为: " << gcd << endl;  
    return 0;
}

