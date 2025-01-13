#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int minuend,subtrahend,dif;
	
	cout << "输入被减数：";	
	cin >> minuend;
	cout << "输入减数：";
	cin >> subtrahend;
	dif = minuend - subtrahend;
	
	cout << setw(12) << minuend << endl; 
	cout << setw(4) << "-" << setw(8) << subtrahend << endl; 
	cout << "----------------" << endl; 
	cout << setw(12) << dif << endl; 

	return 0;
}
