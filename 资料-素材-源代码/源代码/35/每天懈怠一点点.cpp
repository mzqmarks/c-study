#include <iostream>
using namespace std;
int main(){
	double numDown=1;
	int i = 0;
	
	while(i<365){
		numDown *= 0.99;
		i++;
	}
	cout << "每天懈怠一点点，一年后，你落后了 " << 1/numDown << "倍" << endl;
	return 0;
}

