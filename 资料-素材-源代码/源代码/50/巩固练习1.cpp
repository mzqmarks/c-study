#include <iostream>
using namespace std;
int main() {
	int a = 1, b = 1, c;
	for (int i = 1; i <= 5; i++) {
   		c = a + b;
    	a = b;
    	b = c;
	}
	cout << a;

    return 0;
}

