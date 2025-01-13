#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int x = 5;
	int y = 25;
	int z = 625;
	bool result = (pow(x,4) >= z) && (y/x==x) || !(x*y*x<=z);
	cout << result;
	return 0;
}

