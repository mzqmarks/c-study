#include <iostream>
using namespace std;
int main(){
	double numUp = 1;
	int i = 0;
	
	while(i<365){
		numUp *= 1.01; 
		i++;
	}
	cout << "每天努力一点点，一年后，你厉害了 " << numUp << "倍" << endl;
	return 0;
}

