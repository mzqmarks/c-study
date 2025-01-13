#include <iostream>
using namespace std;

int& getValue(int &x) {
	x = x + 5;
    return x;
}

int main() {
    int num = 10;
    cout << "num: " << num << endl;
    int &ref = getValue(num);
    cout << "num:" << num << endl; 
    ref = 20;
    cout << "num: " << num << endl;
    return 0;
}

