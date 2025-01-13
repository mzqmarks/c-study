#include <iostream>
using namespace std;

void modifyValue(int &val) {
    val += 10;
}

int main() {
    int num = 5;
    cout << "num: " << num << endl;
    modifyValue(num);   
    cout << "num: " << num << endl;
    return 0;
}

